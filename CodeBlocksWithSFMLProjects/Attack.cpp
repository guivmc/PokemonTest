#include "Pokemon.h"

Pokemon::Attack::Attack(){}

Pokemon::Attack::~Attack(){}


Pokemon::Attack::Attack(int damage, int multiplier)
{
    this->damage = damage;
    this->multiplier = multiplier;
}

void Pokemon::Attack::dealDamage(Pokemon * opponent)
{
    int enemyHP = opponent->getCurrentHP();

    enemyHP -= damage;

    opponent->setCurrentHP(enemyHP);

    opponent->isFainted();
}

//Getters
int Pokemon::Attack::getDamage()
{
    return damage;
}

int Pokemon::Attack::getMultiplier()
{
    return multiplier;
}

//Setters
void Pokemon::Attack::setDamage(int damage)
{
    this->damage = damage;
}

void Pokemon::Attack::setMultiplier(int multiplier)
{
    this->multiplier = multiplier;
}
