#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <Inventory/Iterator.h>

enum EntityType {
  WEAPON,
  SUPPLIES,
  MEDIC,
  SOLDIER,
  DECORATOR,
  ARMOUR
};

class Entity {
  friend class Iterator;

  private:
    EntityType _type;
    double _price;
    Entity* _head;

  protected:
    Entity* _head, *_next;

  public:
    Entity(EntityType);
    Entity(const Entity &e);
    virtual ~Entity() = 0;
    virtual Entity* clone() = 0;
    void addEntity(Entity* e);
    EntityType getType() const;
    double getPrice() const;
    void setPrice(double price);
    virtual void addEntity(Entity *e) = 0;
    Iterator<Entity> begin();
    Iterator<Entity> end();
    bool isEmpty();
};

#endif
