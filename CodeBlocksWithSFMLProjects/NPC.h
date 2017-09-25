#ifndef NPC_H_INCLUDED
#define NPC_H_INCLUDED

#include "Entity.h"
#include "Pokemon.h"

class NPC : public Entity
{
  public:

      NPC();

      NPC(const char* name);

     ~NPC();
};

#endif // NPC_H_INCLUDED
