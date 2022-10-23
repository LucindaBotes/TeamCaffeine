#ifndef SUPPLY_NODE_H
#define SUPPLY_NODE_H

#include <Inventory/Supplies.h>

class SupplyNode : public Supplies {
  public:
    Supplies supplies;
    SupplyNode *next;
    SupplyNode *previous;
};

#endif