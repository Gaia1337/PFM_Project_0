/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PFM_Project_0AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    PFM_Project_0AudioProcessorEditor (PFM_Project_0AudioProcessor&);
    ~PFM_Project_0AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PFM_Project_0AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PFM_Project_0AudioProcessorEditor)
};
