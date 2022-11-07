#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include "Iterator.h"

enum EntityType {
  WEAPON,
  SUPPLIES,
  MEDIC,
  SOLDIER,
  DECORATOR,
  ARMOUR
};

class Entity {

  private:
    EntityType _type;
    double _price;
    std::string _name;

  protected:
    Entity* _head, *_next;

  public:
    Entity(EntityType);
    Entity(const Entity &e);
    virtual ~Entity() = 0;
    virtual Entity* clone() = 0;
    EntityType getType() const;
    double getPrice() const;
    void setPrice(double price);
    void addEntity(Entity *e);
    bool isEmpty();
    std::string getName() const;
    void setName(std::string name);
};

#endif
