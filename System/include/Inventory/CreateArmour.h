#ifndef CREATEARMOUR_H
#define CREATEARMOUR_H

#include "EntityCreator.h"
#include "ArmourNode.h"
#include "ArmourIterator.h"

class CreateArmour : public EntityCreator {
  private:
    int member;

  public:
    CreateArmour();
    ~CreateArmour();
    ArmourNode * createArmourEntity();
    ArmourIterator<Armour> * createArmourIterator();
};

#endif
