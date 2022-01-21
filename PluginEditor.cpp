/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MaixdelayUAudioProcessorEditor::MaixdelayUAudioProcessorEditor (MaixdelayUAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
    
    auto& params = processor.getParameters();
    
    AudioParameterFloat* dryWetParameter = (AudioParameterFloat*)params.getUnchecked(0);
    
    mDryWetSlider.setBounds(0, 0, 100, 100);
    mDryWetSlider.setSliderStyle(Slider::RotaryVerticalDrag);
    mDryWetSlider.setTextBoxStyle(Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    mDryWetSlider.setRange(dryWetParameter->range.start, dryWetParameter->range.end);
    mDryWetSlider.setValue(*dryWetParameter);
    addAndMakeVisible(mDryWetSlider);
    
    mDryWetSlider.onValueChange = [this, dryWetParameter] {*dryWetParameter = mDryWetSlider.getValue(); };
    mDryWetSlider.onDragStart = [dryWetParameter] {dryWetParameter->beginChangeGesture(); };
    mDryWetSlider.onDragEnd = [dryWetParameter] {dryWetParameter->endChangeGesture(); };
//=================
    AudioParameterFloat* feedBackParameter = (AudioParameterFloat*)params.getUnchecked(0);
    
    mFeedBackSlider.setBounds(100, 0, 100, 100);
    mFeedBackSlider.setSliderStyle(Slider::RotaryVerticalDrag);
    mFeedBackSlider.setTextBoxStyle(Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    mFeedBackSlider.setRange(feedBackParameter->range.start, feedBackParameter->range.end);
    mFeedBackSlider.setValue(*feedBackParameter);
    addAndMakeVisible(mFeedBackSlider);
    
    mFeedBackSlider.onValueChange = [this, feedBackParameter] {*feedBackParameter = mFeedBackSlider.getValue(); };
    mFeedBackSlider.onDragStart = [feedBackParameter] {feedBackParameter->beginChangeGesture(); };
    mFeedBackSlider.onDragEnd = [feedBackParameter] {feedBackParameter->endChangeGesture(); };
//=================
    AudioParameterFloat* delayTimeParameter = (AudioParameterFloat*)params.getUnchecked(0);
    
    mDelayTimeSlider.setBounds(200, 0, 100, 100);
    mDelayTimeSlider.setSliderStyle(Slider::RotaryVerticalDrag);
    mDelayTimeSlider.setTextBoxStyle(Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    mDelayTimeSlider.setRange(delayTimeParameter->range.start, delayTimeParameter->range.end);
    mDelayTimeSlider.setValue(*delayTimeParameter);
    addAndMakeVisible(mDelayTimeSlider);
    
    mDelayTimeSlider.onValueChange = [this, delayTimeParameter] {*delayTimeParameter = mDelayTimeSlider.getValue(); };
    mDelayTimeSlider.onDragStart = [delayTimeParameter] {delayTimeParameter->beginChangeGesture(); };
    mDelayTimeSlider.onDragEnd = [delayTimeParameter] {delayTimeParameter->endChangeGesture(); };
    
}

MaixdelayUAudioProcessorEditor::~MaixdelayUAudioProcessorEditor()
{
}

//==============================================================================
void MaixdelayUAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Delay Plug", getLocalBounds(), Justification::centred, 1);
}

void MaixdelayUAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
