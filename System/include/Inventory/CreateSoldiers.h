#ifndef CREATESOLDIERS_H
#define CREATESOLDIERS_H

#include <Inventory/SoldierNode.h>
#include <Inventory/SoldierIterator.h>
#include <Inventory/EntityCreator.h>

class CreateSoldiers : public EntityCreator {
  private:
    int member;

  public:
    CreateSoldiers();
    ~CreateSoldiers();
    SoldierNode * createSoldiersEntity();
    SoldierIterator<Soldiers> * createSoldiersIterator();
};

#endif
