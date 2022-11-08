#ifndef CREATESUPPLIES_H
#define CREATESUPPLIES_H

#include "Supplies.h"
#include "EntityCreator.h"
class CreateSupplies : public EntityCreator {
  private:
    int member;

  public:
    CreateSupplies();
    ~CreateSupplies();
    Supplies * createSuppliesEntity();
};

#endif
