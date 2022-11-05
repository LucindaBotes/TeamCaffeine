#ifndef CREATESOLDIERS_H
#define CREATESOLDIERS_H

#include "Soldiers.h"
#include "EntityCreator.h"

class CreateSoldiers : public EntityCreator {
  private:
    int member;

  public:
    CreateSoldiers();
    ~CreateSoldiers();
    Soldiers * createSoldiersEntity();
};

#endif
