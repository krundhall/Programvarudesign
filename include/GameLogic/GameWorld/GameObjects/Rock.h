#pragma once
#include "GameObject.h"
#include "../../../CharacterManagement/Interactions/Throw.h"
#include "../../../CharacterManagement/Interactions/Taste.h"
#include "../../../CharacterManagement/Interactions/Inspect.h"
#include <string>
#include <vector>
class Rock : public GameObject
{
private:
public:
    Rock() : GameObject("Rock")
    {
        this->interactionTypes.push_back(new Inspect("It's a rock. ###.###.###.### What did you expect?"));
        this->interactionTypes.push_back(new Throw(this->getName()));
        this->interactionTypes.push_back(new Taste("This wasnt what Rock Candy was supposed to taste liek!"));
    }
};
