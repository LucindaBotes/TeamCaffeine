#ifndef SUPPLIES_H
#define SUPPLIES_H

#include "EntityDecorator.h"
#include "Randomizer.h"

class Supplies : public EntityDecorator{
  private:
    double _health;

  public:
    Supplies();
    Supplies(double);
    Supplies(const Supplies &s);
    virtual ~Supplies() override;

    Entity* clone() override;

    double getHealth() ;
    void setHealth(double health);
};

#endif
