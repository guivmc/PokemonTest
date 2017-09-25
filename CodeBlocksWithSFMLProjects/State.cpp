#include "State.h"

//StateManager
void StateManager::clearStates()
{
    while(!states.empty())
    {
        //Get the last element
        states.back()->cleanup();
        //Removes the last element
        states.pop_back();
    }
}

void StateManager::changeState(State* state)
{
    if(!states.empty())
    {
        states.back()->cleanup();
        states.pop_back();
    }

    states.push_back(state);
    states.back()->init();
}

void StateManager::pushState(State* state)
{
     if(!states.empty()) states.back()->pause();

    states.push_back(state);
    states.back()->init();
}

void StateManager::popState()
{
    if(!states.empty())
    {
        states.back()->cleanup();
        states.pop_back();
    }

    if(!states.empty()) states.back()->resume();
}

