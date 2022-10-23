#ifndef WEAPON_NODE_H
#define WEAPON_NODE_H

#include <Inventory/Weapons.h>

class WeaponNode : public Weapons {
  public:
    Weapons weapon;
    WeaponNode *next;
    WeaponNode *previous;
};

#endif