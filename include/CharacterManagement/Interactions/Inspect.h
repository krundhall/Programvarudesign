#pragma once
#include "../InteractionType.h"
#include <string>
class Inspect : public InteractionType
{
private:
    std::string description;
public:
    Inspect(std::string description) : InteractionType("Inspect"), description(description)
    {
    }

    std::string start()
    {
        return this->description;
    }

};
