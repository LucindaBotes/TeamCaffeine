#ifndef ENTITYDECORATOR_H
#define ENTITYDECORATOR_H

#include "Entity.h"

class EntityDecorator : public Entity{
  protected:
    Entity* _wrappedEntity;

  public:
    EntityDecorator(EntityType);
    ~EntityDecorator();
    virtual Entity* clone()=0;
};

#endif
