#include "PluginEditor.h"

PluginEditor::PluginEditor(PluginProcessor &p)
    : AudioProcessorEditor(&p)
, audio_processor(p)
{
    juce::ignoreUnused(audio_processor);
    setSize (900, 450);
}

PluginEditor::~PluginEditor()
{
}

void PluginEditor::paint(juce::Graphics &g)
{
    g.setColour(juce::Colours::black.withAlpha(0.3f));
    g.fillRect(getLocalBounds());
}

void PluginEditor::resized()
{
}