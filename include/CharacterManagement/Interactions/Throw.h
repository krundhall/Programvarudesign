#pragma once
#include "../InteractionType.h"
#include <string>
class Throw : public InteractionType
{
private:
    std::vector<std::string> descriptions;
    std::string objectName;
public:
    Throw(std::string objectName,std::vector<std::string> descriptions) : InteractionType("Throw"), descriptions(descriptions), objectName(objectName)
    {
        this->interactionOptions.push_back("Throw like your bones will shatter.");
        this->interactionOptions.push_back("Throw with purpose.");
        this->interactionOptions.push_back("Throw like a baby.");
    }

    std::string start()
    {
        if(this->selectedOption == this->interactionOptions[0])
        return "The " + this->objectName + " flies away like Team Rocket, never to be seen again.";
        if(this->selectedOption == this->interactionOptions[1])
        return "The " + this->objectName + " flies away a couple meters.";
        if(this->selectedOption == this->interactionOptions[2])
        return "Pathetic.";
    }

};
