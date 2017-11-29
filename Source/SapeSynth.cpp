/*
  ==============================================================================

    SapeSynth.cpp
    Created: 25 Nov 2017 4:12:11am
    Author:  Weslly Lona

  ==============================================================================
*/

#include "SapeSynth.h"
#define MAX_VOICES 16

void SapeSynth::setup()
{
    for (int i = 0; i < MAX_VOICES; i++) {
        addVoice(new SamplerVoice());
    }
    
    afm.registerBasicFormats();
    
    
    //WavAudioFormat wav;
    
    File* file = new File("SapeF3.wav");
    ScopedPointer<AudioFormatReader> reader = afm.createReaderFor(*file);
    
    //ScopedPointer<AudioFormatReader> reader (wav.createReaderFor(new MemoryInputStream(BinaryData::SapeF3_wav,BinaryData::SapeF3_wavSize,false),true));
    
    BigInteger biNotes;
    biNotes.setRange(0, 128, true);
    
    addSound(new SamplerSound ("default", *reader, biNotes, 77, 0.1, 0.1, 10.0));
}
