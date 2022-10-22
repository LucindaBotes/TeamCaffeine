#ifndef ENTITYDECORATOR_H
#define ENTITYDECORATOR_H

#include <Inventory/Entity.h>

enum EntityDecoratorType{
  WEAPON,
  SUPPLY,
  MEDIC,
  SOLDIER,
  EQUIPMENT,
};

class EntityDecorator : public Entity{
  protected:
    EntityDecoratorType _decoratorType;
    Entity* _wrappedEntity;

  public:
    EntityDecorator();
    ~EntityDecorator();
    virtual Entity* clone()=0;
    EntityDecoratorType getType() const;
    // TODO: Add decorating functions below:
};

#endif
