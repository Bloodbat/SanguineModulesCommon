#include "sanguinetimers.hpp"

namespace sanguineCommonCode {
    Metronome::Metronome() {
        sampleRate = 48000.f;
        tempo = 120.f;
        division = 4.f;
        elapsedTickTime = 1.f;
        bTicked = false;
        bIsClockPulse = false;
        tickCount = 0;
        bWantUndividedTap = false;
        calcTickIncrement();
    }


    Metronome::Metronome(float newTempo, float newSampleRate, float newDivision, float newPhase) {
        sampleRate = newSampleRate;
        tempo = newTempo;
        division = newDivision;
        elapsedTickTime = 0.f;
        bTicked = false;
        bIsClockPulse = false;
        phase = newPhase;
        phasedElapsedTickTime = phase;
        prevPhasedElapsedTickTime = phasedElapsedTickTime;
        tickCount = 0;
        bWantUndividedTap = false;
        calcTickIncrement();
    }

    void Metronome::process() {
        prevPhasedElapsedTickTime = phasedElapsedTickTime;
        phasedElapsedTickTime = elapsedTickTime + phase;

        if (phasedElapsedTickTime >= 1.f) {
            phasedElapsedTickTime -= 1.f;
        }
        if (prevPhasedElapsedTickTime > phasedElapsedTickTime) {
            bTicked = true;

            if (bWantUndividedTap) {
                ++tickCount;

                if (tickCount % static_cast<int>(division) == 0) {
                    tickCount = 0;
                    bIsClockPulse = true;
                }
            }
        } else {
            bTicked = false;
        }

        // Wrap real timer.
        elapsedTickTime += tickIncrement;
        if (elapsedTickTime >= 1.f) {
            elapsedTickTime -= 1.f;
        }
    }

    void Metronome::reset() {
        phasedElapsedTickTime = phase;
        prevPhasedElapsedTickTime = phasedElapsedTickTime;
        elapsedTickTime = 1.f;
        bTicked = true;
        bIsClockPulse = true;
        tickCount = 0;
    }

    void Metronome::setSampleRate(float newSampleRate) {
        sampleRate = newSampleRate;
        calcTickIncrement();
    }

    void Metronome::setTempo(float newTempo) {
        tempo = newTempo;
        calcTickIncrement();
    }

    void Metronome::setDivision(float newDivision) {
        division = newDivision;
        calcTickIncrement();
    }

    void Metronome::setPhase(float newPhase) {
        phase = newPhase;
    }

    void Metronome::setUndividedClockTap(bool wantUndivdedTap) {
        bWantUndividedTap = wantUndivdedTap;
    }

    bool Metronome::hasTicked() const {
        return bTicked;
    }

    float Metronome::getElapsedTickTime() const {
        return elapsedTickTime;
    }

    bool Metronome::hasClockPulse() const {
        return bIsClockPulse;
    }

    bool Metronome::getUndividedClockTap(bool wantUndivdedTap) {
        return bWantUndividedTap;
    }
    void Metronome::calcTickIncrement() {
        beatInterval = 60.f / (tempo * division);
        tickIncrement = 1.f / (beatInterval * sampleRate);
    }
}