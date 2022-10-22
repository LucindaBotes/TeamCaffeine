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
  private:
    EntityDecoratorType _decoratorType;

  public:
    EntityDecorator();
    ~EntityDecorator();
    virtual Entity* clone()=0;
    EntityDecoratorType getType() const;
};

#endif
