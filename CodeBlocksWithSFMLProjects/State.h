#ifndef STATE_H_INCLUDED
#define STATE_H_INCLUDED

#include <vector>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class State
{
  public:

    virtual void init()=0;

    virtual void cleanup()=0;

    //Pushing and popping states causes pausing/resuming.
    virtual void pause()=0;

    virtual void resume()=0;

    virtual void getEvents()=0;

    virtual void update()=0;

    virtual void draw(RenderWindow &gameWindow) = 0;


};

class StateManager
{
  private:
    vector<State*> states;

  public:

    void changeState(State* state);

    //Pause the current state and go to a new state.
    void pushState(State* state);

    //Leave current state and go to previous state.
    void popState();

    void clearStates();

};
#endif // STATE_H_INCLUDED
