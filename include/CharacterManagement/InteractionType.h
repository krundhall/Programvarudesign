#pragma once
#include <string>
#include <vector>

/*
    Populate the "interactionOptions" membervariable in the ctor
    getInteractionOptions returns this list of strings
    setOption selects one of the options (sets the selectedOption membervariable)
    start() starts the interaction.
*/


class InteractionType
{
protected:
    std::string name;
    std::string selectedOption = "";
    std::vector<std::string> interactionOptions;
public:
    InteractionType(std::string name);

    std::vector<std::string> getInteractionOptions() { return this->interactionOptions; }
    bool setOption(std::string &option) { this->selectedOption = option; };
    virtual std::string start();
    std::string getName() { return this->name; }
};
