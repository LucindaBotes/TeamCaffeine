#ifndef ARMOUR_NODE_H
#define ARMOUR_NODE_H

#include <Inventory/Armour.h>

class ArmourNode : public Armour {
  public:
    Armour armour;
    ArmourNode *next;
    ArmourNode *previous;
};

#endif