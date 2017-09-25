#include "Engine.h"
#include "Entity.h"

//Defined reference to static member
//RenderWindow Engine::gameWindow;

Engine::Engine(){}

Engine::Engine(int width, int height, const char* title)
{
    screenHeight = height;
    screenWidht = width;
    gameWindow.create(VideoMode(screenWidht, screenHeight), title, Style::Default);

    run();
}

void Engine::update()
{
    bts.update();
}


void Engine::draw()
{
    gameWindow.clear();

    //le.draw(gameWindow);
   bts.draw(gameWindow);

    gameWindow.display();
}


void Engine::run()
{
    bts.init();
    while(gameWindow.isOpen())
    {
        Event event;

        while(gameWindow.pollEvent(event))
        {
            if(event.type == Event::Closed) gameWindow.close();
        }

        update();
        draw();
    }
}
