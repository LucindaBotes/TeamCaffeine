#ifndef SUPPLIES_H
#define SUPPLIES_H

#include <Inventory/EntityDecorator.h>

class Supplies : public EntityDecorator{
  private:
    double _health;

  public:
    Supplies();
    Supplies(double);
    Supplies(const Supplies &s);
    virtual ~Supplies() override;

    Entity* clone() override;

    double getHealth() const;
    void setHealth(double health);
};

#endif
