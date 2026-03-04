#pragma once
#include <string>
#include "Character.h"
#include <vector>
class CharacterInterface
{
private:
    Character* currentlyActive;
public:
    CharacterInterface(std::string theCharacter);

    std::string activate();
    std::vector<std::string> sendQuery(std::string theQuery); // Element 0 is always the characters response, other elements are options
    std::string endConversation();
};
