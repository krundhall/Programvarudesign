#include "../include/UI/UserInterface.h"
#include "../include/GameLogic/Game.h"
#include <iostream>
#inc

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
        std::vector<std::string> gameObjects = game.getCurrentScene()->getObjects();
        std::vector<std::string> characters = game.getCurrentScene()->getCharacters();


        std::cout << "You find yourself in " << game.getCurrentSceneName() << std::endl;
        std::cout << "In the room with you are these characters:" << std::endl;
        for(std::string character : characters) {
            std::cout << character << std::endl;
        }
        std::cout << "You can also see these objects:" << std::endl;
        for(std::string object : gameObjects) {
            std::cout << object << std::endl;
        }

        std::cout << "What do you want to do?" << std::endl;
        std::cout << "1) Interact with object" << std::endl;
        std::cout << "2) Interact with character" << std::endl;

        int choice;
        while(true) {
            std::cin >> choice;
            if (choice == 1) {
                std::cout << "Which object do you wanna interact with?" << std::endl;
                for(std::string object : gameObjects)
                    std::cout << "-" << object << std::endl;

                std::string chosenObject;
                while(std::count(gameObjects.begin(), gameObjects.end(), chosenObject) == 0) {
                    getline(std::cin, chosenObject);
                }
                std::cout << "What do you wanna do with the " << chosenObject << "?" << std::endl;
                std::vector<std::string> interactions = game.selectObject(chosenObject);

                for(std::string interaction : interactions)
                    std::cout << "-" << interaction << std::endl;

                std::string chosenInteraction;
                while(std::count(interactions.begin(), interactions.end(), chosenInteraction) == 0) {
                    getline(std::cin, chosenInteraction);
                }
                std::vector<std::string> options = game.selectInteraction(chosenInteraction);
                if(options.size() > 0) {

                    for (int i = 0; i < options.size(); i++)
                        std::cout << i << ") " << options[i] << std::endl;

                    int option;
                    std::cin >> option;

                    //TODO handle return and give error if wrong option selected
                    game.setInteractionOption(options[option]);
                }
                std::cout << game.startInteraction() << std::endl;

            } else if (choice == 2) {

            }
        }




    }
}
