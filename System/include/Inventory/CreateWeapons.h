#ifndef CREATEWEAPONS_H
#define CREATEWEAPONS_H

#include <Inventory/Weapons.h>
#include <Inventory/EntityCreator.h>

class CreateWeapons : public EntityCreator {
  private:
    int member;

  public:
    CreateWeapons();
    ~CreateWeapons();
    Weapons * createWeaponsEntity();
};

#endif
