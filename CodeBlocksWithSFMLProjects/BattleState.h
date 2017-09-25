#ifndef BATTLESTATE_H_INCLUDED
#define BATTLESTATE_H_INCLUDED

#include "State.h"
#include <SFML/Graphics/RectangleShape.hpp>
#include "Pokemon.h"

using namespace sf;

class BattleState : public State
{
  private:

    Pokemon poke1, poke2;
   // Attack at1;

    //HP bars
    RectangleShape playerBar, enemyBar;

  public:

    BattleState();

    void init();

    void cleanup();

    void pause();

    void resume();

    void getEvents();

    void update();

    void draw(RenderWindow &gameWindow);
};


#endif // BATTLESTATE_H_INCLUDED
