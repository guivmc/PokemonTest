#include "Pokemon.h"

//Static reference
//Pokemon::Attack Pokemon::attack[4];

Pokemon::Pokemon(){}

Pokemon::~Pokemon(){}

Pokemon::Pokemon(int currentHP, int totalHP)
{
    this->currentHP = currentHP;
    this->totalHP = totalHP;
    attack[0] = Attack(25, 2);
}
                                                                                                   //Super of Entity
Pokemon::Pokemon(int currentHP, int totalHP, float x, float y, const char* fileName, IntRect rect) : Entity(x, y, fileName, rect)
{
    this->currentHP = currentHP;
    this->totalHP = totalHP;
}

bool Pokemon::isFainted()
{
    if(currentHP <= 0)
    {
        fainted = true;

        return fainted;
    }

    fainted = false;

    return fainted;
}

//Getters
int Pokemon::getCurrentHP()
{
    return currentHP;
}

Pokemon::Attack Pokemon::getAttack(int index)
{
    return attack[index];
}


//Setters
void Pokemon::setCurrentHP(int currentHP)
{
    this->currentHP = currentHP;
}
