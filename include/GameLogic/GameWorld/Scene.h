#pragma once
#include <string>
#include "GameObjects/GameObject.h"


class Scene
{
protected:
    std::string name;
    std::vector<Character*> characters;
    std::vector<GameObject*> objects;

public:
    Scene(std::string name);
    GameObject* findGameObject(std::string &gameObjectName);
    bool isAvailable(std::string theCharacter);
    std::string getName() const { return this->name; }



};
