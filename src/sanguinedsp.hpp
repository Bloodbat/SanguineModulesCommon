#pragma once

#include "rack.hpp"

#ifdef CARDINALMUTANTS
#define sanguineCommonCode mutantsCommonCode
#endif

#ifdef CARDINALMONSTERS
#define sanguineCommonCode monstersCommonCode
#endif

namespace sanguineCommonCode {
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
	// Modified by Bloodbat, 2026.
	template <typename T = float>
	struct RampGenerator {
		T ellapsedTime;
		T rampLength;
		T rampVoltage;
		T resetVoltage;
		// bool autoReset; // For future use.
		bool finished; // The output is the inverse of this.

		RampGenerator() {
			ellapsedTime = 0.f;
			rampLength = 0.f;
			rampVoltage = 1.f;
			resetVoltage = 1.f;
			// autoReset = true;
			finished = true;
		}

		// Immediately resets the ramp.
		void reset() {
			ellapsedTime = 0.f;
			rampLength = 0.f;
			rampVoltage = resetVoltage;
			finished = true;
		}

		// Advances state by deltaTime.
		void process(T deltaTime) {
			rampVoltage = resetVoltage;
			ellapsedTime += deltaTime;
			if (!finished) {
				finished = ellapsedTime >= rampLength;
				rampVoltage = clamp(ellapsedTime / rampLength, 0.f, 1.f);
			} else {
				reset();
			}
		}

		// Begins a ramp with rampLength.
		void trigger(T theRampLength) {
			finished = false;
			rampLength = theRampLength;
		}
	};

	/*
	Linearly interpolates between "a" and "b", from "p = 0" to "p = 1" using
	SIMD.
	*/
	inline rack::simd::float_4 crossfade(rack::simd::float_4 a, rack::simd::float_4 b, rack::simd::float_4 p) {
		return a + (b - a) * p;
	}
}