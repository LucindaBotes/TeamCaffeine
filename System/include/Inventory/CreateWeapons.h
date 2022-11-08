#ifndef CREATEWEAPONS_H
#define CREATEWEAPONS_H

#include "Weapons.h"
#include "EntityCreator.h"

class CreateWeapons : public EntityCreator {
  private:
    int member;

  public:
    CreateWeapons();
    ~CreateWeapons();
    Weapons * createWeaponsEntity();
};

#endif
