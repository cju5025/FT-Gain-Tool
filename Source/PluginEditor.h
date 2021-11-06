#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

class GainToolAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    GainToolAudioProcessorEditor (GainToolAudioProcessor&);
    ~GainToolAudioProcessorEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    GainToolAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GainToolAudioProcessorEditor)
};
