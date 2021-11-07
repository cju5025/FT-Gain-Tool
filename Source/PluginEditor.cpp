#include "PluginProcessor.h"
#include "PluginEditor.h"

GainToolAudioProcessorEditor::GainToolAudioProcessorEditor (GainToolAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    setSize (150, 300);
    
    addAndMakeVisible(mDial);
    mDial.setSliderStyle(Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    mDial.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
    mDial.setLookAndFeel(&mGTDial);
}

GainToolAudioProcessorEditor::~GainToolAudioProcessorEditor()
{
}

void GainToolAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
}

void GainToolAudioProcessorEditor::resized()
{
    mDial.setBounds(getWidth() / 2 - 50, getHeight() / 2, 100, 100);
}
