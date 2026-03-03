#pragma once
#include "GameObjects/GameObject.h"
#include "../CharacterManagement/InteractionType.h"
#include "../CharacterManagement/CharacterInterface.h"
#include "GameWorld/Scene.h"
#include <vector>
#include <string>
#include <memory>

// We removed the GameElement class because we do not need recursive scenes. :)
class Game
{
private:
    GameObject* currentGameObject;
    Scene* currentScene;
    Scene* inventory;
public:
    std::vector<InteractionType> selectObject(std::string &gameObjectName);
    std::vector<std::string> selectInteraction(std::string &interactionType);
    // Since this is a minimal viable product
    // we have decided to change "setInteractionOptions" to be singular
    bool setInteractionOption(std::string option);
    std::string startInteraction();
    std::unique_ptr<CharacterInterface> initiateConversation(std::string theCharacter);

};
