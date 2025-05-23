#pragma once

#include "rack.hpp"

// Saturators: Zavalishin 2018, "The Art of VA Filter Design",
// http://www.native-instruments.com/fileadmin/ni_media/downloads/pdf/VAFilterDesign_2.0.0a.pdf via Bogaudio

struct SaturatorFloat_4 {
	static const rack::simd::float_4 limit;

	static inline rack::simd::float_4 saturation(rack::simd::float_4 x) {
		const rack::simd::float_4 y1 = 0.98765f; // (2*x - 1)/x**2 where x is 0.9.
		const rack::simd::float_4 offset = 0.075f / limit; // Magic.
		rack::simd::float_4 x1 = (x + 1.f) * 0.5f;
		return limit * (offset + x1 - rack::simd::sqrt(x1 * x1 - y1 * x) * (1.f / y1));
	}

	rack::simd::float_4 next(rack::simd::float_4 sample) {
		rack::simd::float_4 x = sample * (1.f / limit);
		rack::simd::float_4 negativeVoltage = sample < 0.f;
		rack::simd::float_4 saturated = rack::simd::ifelse(negativeVoltage, -saturation(-x), saturation(x));
		return saturated;
	}
};

struct SaturatorFloat {
	static const float limit;

	static inline float saturation(float x) {
		const float y1 = 0.98765f; // (2*x - 1)/x**2 where x is 0.9.
		const float offset = 0.075f / limit; // Magic.
		float x1 = (x + 1.f) * 0.5f;
		return limit * (offset + x1 - sqrtf(x1 * x1 - y1 * x) * (1.f / y1));
	}

	float next(float sample) {
		float x = sample * (1.f / limit);
		if (sample < 0.f) {
			return -saturation(-x);
		}
		return saturation(x);
	}
};

// Based on LittleUtils PulseGenerator, EUPL-1.2 GPL 3 compatible license.
// Modified by Bloodbat, 2025.
struct RampGenerator {
	float ellapsedTime = 0.f;
	float rampLength = 0.f;
	float rampVoltage = 1.f;
	float resetVoltage = 1.f;
	bool autoReset = true;
	bool finished = true; // The output is the inverse of this.

	// Immediately resets the ramp.
	void reset() {
		ellapsedTime = 0.f;
		rampLength = 0.f;
		rampVoltage = resetVoltage;
		finished = true;
	}

	// Advances state by deltaTime.
	void process(float deltaTime) {
		rampVoltage = resetVoltage;
		ellapsedTime += deltaTime;
		if (!finished) {
			finished = ellapsedTime >= rampLength;
			rampVoltage = rack::math::clamp(ellapsedTime / rampLength, 0.f, 1.f);
		} else {
			reset();
		}
	}

	// Begins a ramp with rampLength.
	void trigger(float theRampLength) {
		finished = false;
		rampLength = theRampLength;
	}
};