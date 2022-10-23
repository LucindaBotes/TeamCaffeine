#ifndef SOLDIER_NODE_H
#define SOLDIER_NODE_H

#include <Inventory/Soldiers.h>

class SoldierNode : public Soldiers {
  public:
    Soldiers soldiers;
    SoldierNode *next;
    SoldierNode *previous;
};

#endif