/*
  ==============================================================================

    SapeSynth.h
    Created: 25 Nov 2017 4:12:11am
    Author:  Weslly Lona

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class SapeSynth : public Synthesiser {
public:
    SapeSynth() {}
    
    void setup();

private:
    AudioFormatManager afm;
    
    //WavAudioFormat wav;

};
