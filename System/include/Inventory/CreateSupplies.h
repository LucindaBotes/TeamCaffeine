#ifndef CREATESUPPLIES_H
#define CREATESUPPLIES_H

#include <Inventory/Supplies.h>
#include <Inventory/EntityCreator.h>
class CreateSupplies : public EntityCreator {
  private:
    int member;

  public:
    CreateSupplies();
    ~CreateSupplies();
    Supplies * createSuppliesEntity();
};

#endif
