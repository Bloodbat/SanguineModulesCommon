#pragma once

#include <random>

#include "rack.hpp"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#include "pcg_random.hpp"
#pragma GCC diagnostic pop

namespace sanguineRandom {
#ifdef METAMODULE
#define M_PI 3.14159265358979323846
#endif

    static constexpr float kDoublePi = 2.f * M_PI;

    // Based on Rack's random.hpp, tweaked to avoid a multiplication.
    /** Returns a normal random number with mean 0 and standard deviation 1 */
    inline float normal() {
        // Box-Muller transform
        float radius = std::sqrt(-2.f * std::log(1.f - rack::random::get<float>()));
        float theta = kDoublePi * rack::random::get<float>();
        return radius * std::sin(theta);
    }

    // Adapted from Mutable Instruments' stmlib.
    class MutableRandom {
    public:
        inline uint32_t state() {
            return rng_state_;
        }

        inline void Seed(uint32_t seed) {
            rng_state_ = seed;
        }

        inline uint32_t GetWord() {
            rng_state_ = rng_state_ * 1664525L + 1013904223L;
            return state();
        }

        inline int16_t GetSample() {
            return static_cast<int16_t>(GetWord() >> 16);
        }

        inline float GetFloat() {
            return static_cast<float>(GetWord()) / 4294967296.0f;
        }

    private:
        uint32_t rng_state_;
    };

    // A random generator class which produces floats using normal distribution and PCG32.
    class SanguineRandomNormal {
    public:
        void init(const uint64_t seed, const float mean = 0.f, const float deviation = 1.f) {
            pcgRng = pcg32(seed);

            normalDist = std::normal_distribution<float>(mean, deviation);
        }

        inline float normal() {
            return normalDist(pcgRng);
        }

    private:
        std::normal_distribution<float> normalDist;
        pcg32 pcgRng;
    };

    /*
       A random generator class which produces floats using normal distribution;
       users most provide their own Uniform random bit generator.
    */
    class SanguineRandomNormalCustom {
    public:
        void init(const float mean = 0.f, const float deviation = 1.f) {
            normalDist = std::normal_distribution<float>(mean, deviation);
        }

        template<typename UniformRNG>
        inline float normal(UniformRNG& generator) {
            return normalDist(generator);
        }

    private:
        std::normal_distribution<float> normalDist;
    };
}