#pragma once
#include "../../../CharacterManagement/InteractionType.h"
#include <vector>
#include <string>
class GameObject
{
protected:
    std::string name;
    std::vector<InteractionType*> interactionTypes;
    InteractionType* currentInteraction;
public:
    GameObject(std::string name);
    ~GameObject() {
        for(InteractionType* type : interactionTypes) {
            delete type;
        }
    }
    // Changed named from "getInteractionTypes()"
    // See selectObject.png in docs
    std::vector<std::string> listInteractionTypes() {
        std::vector<std::string> types;
        for(InteractionType* type : interactionTypes) {
            types.push_back(type->getName());
        }
        return types;
    }

    // Changed name from "selectInteraction()""
    // See selectInteraction.png in docs
    std::vector<std::string> listInteractionOptions(std::string &interactionType) {
        std::vector<std::string> returns;
        for(InteractionType* type : interactionTypes) {
            returns.push_back(type->getName());
        }
        return returns;
    }
    std::vector<std::string> selectInteraction(std::string &interactionType) {
        for(InteractionType* type : interactionTypes) {
            if(type->getName() == interactionType) {
                this->currentInteraction = type;
                return type->getInteractionOptions();
            }
        }
        std::vector<std::string> empty;
        return empty;
    }
    bool setSelectedInteractionOption(std::string &option) {
        this->currentInteraction->setOption(option);
    }
    std::string startSelectedInteraction() {
        return this->currentInteraction->start();
    }

    std::string getName() { return this->name; }



};
