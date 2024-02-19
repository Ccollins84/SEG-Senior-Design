#include "MainComponent.h"

MainComponent::MainComponent()
{
    setSize(600, 400);

    addAndMakeVisible(modulationButton);
    modulationButton.setButtonText("Modulation");
    modulationButton.onClick = [this] { /* Handle Modulation button click */ };

    addAndMakeVisible(chorusButton);
    chorusButton.setButtonText("Chorus");
    chorusButton.onClick = [this] { /* Handle Chorus button click */ };

    addAndMakeVisible(reverbButton);
    reverbButton.setButtonText("Reverb");
    reverbButton.onClick = [this] { /* Handle Reverb button click */ };

    addAndMakeVisible(delayButton);
    delayButton.setButtonText("Delay");
    delayButton.onClick = [this] { /* Handle Delay button click */ };
}

MainComponent::~MainComponent()
{
}

void MainComponent::paint(juce::Graphics& g)
{
    g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

    g.setFont(juce::Font(16.0f));
    g.setColour(juce::Colours::white);
}

void MainComponent::resized()
{
    // Set the bounds for your buttons
    int buttonWidth = 100;
    int buttonHeight = 100;
    int margin = 30;

    modulationButton.setBounds(margin, margin, buttonWidth, buttonHeight);
    chorusButton.setBounds(margin * 2 + buttonWidth, margin, buttonWidth, buttonHeight);
    reverbButton.setBounds(margin * 3 + buttonWidth * 2, margin, buttonWidth, buttonHeight);
    delayButton.setBounds(margin * 4 + buttonHeight * 3, margin, buttonWidth, buttonHeight);
}
