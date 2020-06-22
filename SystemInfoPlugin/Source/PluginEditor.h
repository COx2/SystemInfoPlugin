/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class SystemInfoPluginAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    SystemInfoPluginAudioProcessorEditor (SystemInfoPluginAudioProcessor&);
    ~SystemInfoPluginAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    static String getMacAddressList();
    static String getFileSystemRoots();
    static String getIPAddressList();
    static String getDisplayOrientation();
    static String getDisplayInfo();
    static String getAllSystemInfo();

    //==============================================================================
    void lookAndFeelChanged() override;

    //==============================================================================
    TextEditor resultsBox;

    SystemInfoPluginAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SystemInfoPluginAudioProcessorEditor)
};
