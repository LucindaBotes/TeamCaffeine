#ifndef ENTITY_H
#define ENTITY_H

enum EntityType {
  WEAPON,
  SUPPLIES,
  MEDIC,
  SOLDIER,
  EQUIPMENT
};

class Entity {
  protected:
    EntityType _type;
    double _price;

  public:
    Entity();
    Entity(double);
    Entity(const Entity &e);
    virtual ~Entity() = 0;
    EntityType getType() const;
    virtual Entity* clone() = 0;

    double getPrice() const;
    void setPrice(double price);
};

#endif
