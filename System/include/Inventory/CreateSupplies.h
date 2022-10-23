#ifndef CREATESUPPLIES_H
#define CREATESUPPLIES_H

#include <Inventory/SuppliesIterator.h>
#include <Inventory/SupplyNode.h>
#include <Inventory/EntityCreator.h>
class CreateSupplies : public EntityCreator {
  private:
    int member;

  public:
    CreateSupplies();
    ~CreateSupplies();
    SupplyNode * createSuppliesEntity();
    SuppliesIterator<Supplies> * createSuppliesIterator();
};

#endif
