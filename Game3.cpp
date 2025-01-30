// Game3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "GameEngine.h"

int main()
{
    std::shared_ptr<GameEngine> game= std::make_shared<GameEngine>();
    game->run(game);

    return 0;
}
