#pragma once
#include "GameObject.h"
#include "../../../CharacterManagement/Interactions/Throw.h"
#include "../../../CharacterManagement/Interactions/Taste.h"
#include "../../../CharacterManagement/Interactions/Inspect.h"
#include <string>
#include <vector>
class Lava : public GameObject
{
private:
public:
    Lava() : GameObject("Lava")
    {
        this->interactionTypes.push_back(new Inspect("HotHotHotHotHotHot!!@@@@"));
        this->interactionTypes.push_back(new Taste("You violently burn your tongue trying to taste the magma.\n-1 Speech."));
    }
};
