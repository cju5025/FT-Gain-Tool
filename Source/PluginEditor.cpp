#include "PluginProcessor.h"
#include "PluginEditor.h"

GainToolAudioProcessorEditor::GainToolAudioProcessorEditor (GainToolAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    setSize (400, 300);
}

GainToolAudioProcessorEditor::~GainToolAudioProcessorEditor()
{
}

//==============================================================================
void GainToolAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
}

void GainToolAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
