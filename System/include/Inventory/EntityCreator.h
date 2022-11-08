#ifndef ENTITYCREATOR_H
#define ENTITYCREATOR_H

#include "Entity.h"
#include "Iterator.h"
class EntityCreator {
  public:
    EntityCreator();
    virtual ~EntityCreator();
    virtual Entity * createEntity();
};

#endif
