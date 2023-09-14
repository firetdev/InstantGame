#include <SFML/Graphics.hpp>
#include <iostream>
#include "InstantGame.h"

class Goal: public Character
{
public:
    void check(Character* player)
    {
        if(colliding(player))
        {
            player->x = 10;
            player->y = 10;
            player->setCam(10 + player->w / 2, 10 + player->h / 2);
        }
    }
};

int main()
{
    Engine::createWindow(800, 600, "My Game");
    Goal goal;
    goal.setup("world_wall.png", 1000, 10, 50, 50);
    Character player;
    player.setup("world_wall.png", 10, 10, 50, 50);
    player.setupCamera(25, 25, 800, 600);
    Text txt("test game", 10, 10, 50, "../../Comet Chaos/Comet Chaos/Arial.ttf", {255, 0, 0});
    createTilemap(50, 100, "world_wall.png", 50, 50, {{0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 0, 0, 0, 0}, {1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1} });
    float gravity = 0;
    int dir = 0;
    Engine::scene = "play";
    while(Engine::open())
    {
        goal.check(&player);
        player.updateCamera();
        Engine::update();
        if(Engine::scene == "play")
        {
            if(player.onGround == false)
            {
                gravity += 1;
            }
            else
            {
                gravity = 0;
            }
            sf::Event event;
            if (Input::keys["Up"])
            {
                if (player.onGround == true)
                {
                    gravity = -1000;
                    player.move(0, -50);
                }
            }
            if (Input::keys["Left"])
            {
                dir = -1;
            }
            else if (Input::keys["Right"])
            {
                dir = 1;
            }
            else
            {
                dir = 0;
            }
            player.move(275 * dir, gravity);
            Engine::clearWindow();
            Engine::draw(player);
            Engine::draw(txt);
            Engine::renderBlocks();
            Engine::displayWindow();
        }
    }
    return 0;
}