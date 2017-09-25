#include "BattleState.h"

BattleState::BattleState() : poke1(100, 100, 10.f, 10.f, "res/textures/Barry.png", IntRect (83, 200, 32, 32)), poke2(100, 100){}

void BattleState::draw(RenderWindow &gameWindow)
{
    gameWindow.draw(playerBar);
    poke1.drawEntity(gameWindow);
    gameWindow.draw(enemyBar);
}

void BattleState::cleanup()
{

}

void BattleState::getEvents()
{

}

void BattleState::init()
{
    playerBar.setSize(Vector2f(150, 10));
    enemyBar.setSize(Vector2f(150, 10));

    playerBar.setPosition(65, 180);
    enemyBar.setPosition(400, 80);

    playerBar.setFillColor(Color::Green);
    enemyBar.setFillColor(Color::Green);

   // poke1.getAttack(0).dealDamage(&poke2);
}

void BattleState::pause()
{

}

void BattleState::resume()
{

}

void BattleState::update()
{
    playerBar.setScale((float)(poke1.getCurrentHP())/100, 1);
    enemyBar.setScale((float) (poke2.getCurrentHP())/100, 1);

    //at1.dealDamage(&poke1);
}
