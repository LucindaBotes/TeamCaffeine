
#ifndef CREATESOLDIERS_H
#define CREATESOLDIERS_H

#include <Inventory/Soldiers.h>
#include <Inventory/EntityCreator.h>

class CreateSoldiers : public EntityCreator {
  private:
    int member;

  public:
    CreateSoldiers();
    ~CreateSoldiers();
    Soldiers * createSoldiersEntity();
};

#endif
