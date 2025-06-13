#pragma once

class Metronome {

    /*
    Based on the Valley Metronome source:

    Copyright 2017 Dale Johnson

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

    3. Neither the name of the copyright holder nor the names of its contributors
    may be used to endorse or promote products derived from this software without
    specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
    LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
    CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
    SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
    INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
    CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.
    */

public:
    Metronome();

    Metronome(float newTempo, float newSampleRate, float newDivision, float newPhase);

    void process();

    void reset();

    void setSampleRate(float newSampleRate);

    void setTempo(float newTempo);

    void setDivision(float newDivision);

    void setPhase(float newPhase);

    void setUndividedClockTap(bool wantUndivdedTap);

    bool hasTicked() const;

    float getElapsedTickTime() const;

    bool hasClockPulse() const;

    bool getUndividedClockTap(bool wantUndivdedTap);

private:
    float sampleRate;
    float tempo;
    float division;
    float beatInterval;
    float tickIncrement;
    float elapsedTickTime;
    float phasedElapsedTickTime;
    float prevPhasedElapsedTickTime;
    float phase;
    bool bTicked;
    bool bIsClockPulse;
    bool bWantUndividedTap;
    int tickCount;

    void calcTickIncrement();
};