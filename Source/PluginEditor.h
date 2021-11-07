#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "GTDial.h"

class GainToolAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    GainToolAudioProcessorEditor (GainToolAudioProcessor&);
    ~GainToolAudioProcessorEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    
    Slider mDial;
    GTDial mGTDial;
    
    GainToolAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GainToolAudioProcessorEditor)
};
