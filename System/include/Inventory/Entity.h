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
  private:
    EntityType _type;
    double _price;

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
};

#endif
