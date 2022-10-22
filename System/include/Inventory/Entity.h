#ifndef ENTITY_H
#define ENTITY_H

enum EntityType{
  WEAPONS,
  SUPPLIES,
  MEDIC,
  SOLDIER,
  EQUIPMENT,
};

class Entity {
  protected:
    EntityType _type;

  public:
    Entity();
    virtual ~Entity()=0;
    virtual Entity* clone()=0;
    EntityType getType() const;
};

#endif
