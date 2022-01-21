/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class MaixdelayUAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    MaixdelayUAudioProcessorEditor (MaixdelayUAudioProcessor&);
    ~MaixdelayUAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    
    Slider mDryWetSlider;
    Slider mFeedBackSlider;
    Slider mDelayTimeSlider;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    MaixdelayUAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MaixdelayUAudioProcessorEditor)
};
