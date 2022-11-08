#ifndef CREATEARMOUR_H
#define CREATEARMOUR_H

#include "EntityCreator.h"
#include "Armour.h"

class CreateArmour : public EntityCreator {
  private:
    int member;

  public:
    CreateArmour();
    ~CreateArmour();
    Armour* createArmourEntity();
};

#endif
