#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include <SFML/Graphics.hpp>
#include "LevelState.h"
#include "BattleState.h"

using namespace sf;

class Engine
{
  private:

    RenderWindow gameWindow;                        //Game Window
    int screenWidht, screenHeight;                  //Window Size

    Clock clock;                                    //FPS
    Time deltaTime;
    float dtAsSeconds;

    void update();

    void draw();

  public:

    Engine();

    Engine(int width, int height, const char* title);

    //void start(int width, int height);

    LevelState le;
    BattleState bts;

    void run();
};

#endif // ENGINE_H_INCLUDED
