#include "VolcanoScene.h"
#include "../../../include/CharacterManagement/Character.h"
VolcanoScene::VolcanoScene()
    : Scene("Vesuvius")
{
    this->characters.push_back(new Character("Jonas", "Hej."))
    this->characters.push_back(new Character("Spider-Man", "Woah!"))
    this->characters.push_back(new Character("Fernando", "Mama mia!"))
    this->characters.push_back(new Character("Sherlock", "When you have eliminated the impossible, "
                                                          "whatever remains, however improbable, "
                                                          "must be the truth."))
    this->characters.push_back(new Character("Yapper", "According to all known laws of aviation,"
                                                        "there is no way a bee should be able to fly."))

"))

}
