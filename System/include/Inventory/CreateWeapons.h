#ifndef CREATEWEAPONS_H
#define CREATEWEAPONS_H

#include <Inventory/WeaponsIterator.h>
#include <Inventory/WeaponNode.h>
#include <Inventory/EntityCreator.h>

class CreateWeapons : public EntityCreator {
  private:
    int member;

  public:
    CreateWeapons();
    ~CreateWeapons();
    WeaponNode * createWeaponsEntity();
    WeaponsIterator<Weapons> * createWeaponsIterator();
};

#endif
