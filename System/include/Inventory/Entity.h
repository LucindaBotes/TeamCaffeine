#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <Inventory/Iterator.h>

enum EntityType {
  WEAPON,
  SUPPLIES,
  MEDIC,
  SOLDIER,
  EQUIPMENT,
  ARMOUR
};

class Entity {
  friend class Iterator;
  protected:
    EntityType _type;
    double _price;
    Entity* _head;

  public:
    Entity();
    Entity(const Entity &e);
    virtual ~Entity() = 0;
    EntityType getType() const;
    virtual Entity* clone() = 0;
    double getPrice() const;
    void setPrice(double price);
    virtual void addEntity(Entity *e) = 0;
    Iterator<Entity> begin();
    Iterator<Entity> end();
    bool isEmpty();
};

#endif
