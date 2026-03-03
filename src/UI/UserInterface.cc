#include "../include/UI/UserInterface.h"
#include "../include/GameLogic/Game.h"
#include <iostream>

UserInterface::UserInterface()
{
}

void UserInterface::start()
{
    Game game = Game();


    /*
Run file

Game describes where the player finds themselves.
Game describes the things around you in the scene.
Game presents possible actions:

1) INTERACT WITH OBJECT
    What object do you wanna interact with?  ________

    see InteractWithObject.png

2) INTERACT WITH CHARACTER
    What character do you wanna interact with? ______

    see ms-interaction-diag-interact-with-character.png


*/
    while (true)
    {
        std::cout << "You find yourself in " << game.getCurrentSceneName()
        std::cout << game.getCurrentScene() << std::endl;




    }
}
