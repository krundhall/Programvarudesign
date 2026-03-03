#pragma once
#include <string>
#include "GameObjects/GameObject.h"


class Scene
{
private:

public:
    GameObject* findGameObject(std::string &gameObjectName);
    bool isAvailable(std::string theCharacter);

};
