#pragma once
#include "../../../CharacterManagement/InteractionType.h"
#include <vector>
#include <string>
class GameObject
{
private:
    std::string name;
    std::vector<std::string> interactionTypes;
    InteractionType* currentInteraction;
public:
    GameObject(std::string name);

    // Changed named from "getInteractionTypes()"
    // See selectObject.png in docs
    std::vector<std::string> listInteractionTypes();

    // Changed name from "selectInteraction()""
    // See selectInteraction.png in docs
    std::vector<std::string> listInteractionOptions(std::string &interactionType);
    std::vector<std::string> selectInteraction(std::string &interactionType);
    bool setSelectedInteractionOption(std::string &option);
    std::string startSelectedInteraction();

    std::string getName() { return this->name; }



};
