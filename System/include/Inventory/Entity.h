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

  public:
    Entity();
    Entity(const Entity &e);
    virtual ~Entity() = 0;
    EntityType getType() const;
    virtual Entity* clone() = 0;
};

#endif
