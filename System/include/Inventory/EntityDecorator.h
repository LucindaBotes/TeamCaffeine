#ifndef ENTITYDECORATOR_H
#define ENTITYDECORATOR_H

#include <Inventory/Entity.h>

class EntityDecorator : public Entity{
  protected:
    Entity* _wrappedEntity;

  public:
    EntityDecorator();
    ~EntityDecorator();
    virtual Entity* clone()=0;
    virtual void addEntity(Entity* e)=0;
    // TODO: Add decorating functions below:
};

#endif
