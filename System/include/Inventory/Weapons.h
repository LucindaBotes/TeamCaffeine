#ifndef WEAPONS_H
#define WEAPONS_H

#include "EntityDecorator.h"

class Weapons : public EntityDecorator{
  private:
    double _damage;

  public:
    Weapons();
    Weapons(double);
    Weapons(const Weapons &w);
    virtual ~Weapons() override;

    Entity* clone() override;

    double getDamage() const;
    void setDamage(double damage);
};

#endif
