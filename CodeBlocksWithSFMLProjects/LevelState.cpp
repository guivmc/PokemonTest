#include "LevelState.h"

//Entity e1(0.f, 0.f, "res/textures/Barry.png", IntRect (83, 200, 32, 32));

LevelState::LevelState() : e1(0.f, 0.f, "res/textures/Barry.png", IntRect (83, 200, 32, 32)) {}

void LevelState::draw(RenderWindow &gameWindow)
{
   e1.drawEntity(gameWindow);
}

void LevelState::cleanup()
{

}

void LevelState::getEvents()
{

}

void LevelState::init()
{

}

void LevelState::pause()
{

}

void LevelState::resume()
{

}

void LevelState::update()
{

}
