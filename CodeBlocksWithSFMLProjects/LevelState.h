#ifndef LEVELSTATE_H_INCLUDED
#define LEVELSTATE_H_INCLUDED

#include "State.h"
#include "Entity.h"

class LevelState : public State
{
  private:

      Entity e1;

  public:

    LevelState();

    void init();

    void cleanup();

    void pause();

    void resume();

    void getEvents();

    void update();

    void draw(RenderWindow &gameWindow);
};

#endif // LEVELSTATE_H_INCLUDED
