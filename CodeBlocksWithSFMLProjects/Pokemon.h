#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

#include "Entity.h"

//class Attack;

class Pokemon : public Entity
{
  protected:

      int currentHP, totalHP;

      bool fainted;

      class Attack
      {
            private:

                int damage, multiplier;

            public:

                Attack();

                Attack(int damage, int multiplier);

                ~Attack();

                void dealDamage(Pokemon * opponent);

                //Getters
                int getDamage();

                int getMultiplier();

                //Setters
                void setDamage(int damage);

                void setMultiplier(int multiplier);
     };

     Attack attack[4];

  public:

      Pokemon();

      Pokemon(int currentHP, int totalHP);

      Pokemon(int currentHP, int totalHP, float x, float y, const char* fileName, IntRect rect);

     ~Pokemon();

      bool isFainted();

      //Getters
      int getCurrentHP();

      Attack getAttack(int index);

      //Setters
      void setCurrentHP(int currentHP);

};

/*class Attack
{
  private:

      int damage, multiplier;

  public:

       Attack();

       Attack(int damage, int multiplier);

      ~Attack();

      void dealDamage(Pokemon * opponent);

      //Getters
      int getDamage();

      int getMultiplier();

      //Setters
      void setDamage(int damage);

      void setMultiplier(int multiplier);
};*/

#endif // POKEMON_H_INCLUDED
