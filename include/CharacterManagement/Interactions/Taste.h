#pragma once
#include "../InteractionType.h"
#include <string>
class Taste : public InteractionType
{
private:
    std::string description;
public:
    Taste(std::string description) : InteractionType("Taste"), description(description)
    {
    }

    std::string start()
    {
        return this->description;
    }

};
