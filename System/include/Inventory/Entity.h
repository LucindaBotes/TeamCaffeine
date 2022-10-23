#ifndef ENTITY_H
#define ENTITY_H

enum EntityType {
  WEAPON,
  SUPPLIES,
  MEDIC,
  SOLDIER,
  DECORATOR,
  ARMOUR
};

class Entity {
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

    virtual void addEntity(Entity* e) = 0;
};

#endif
