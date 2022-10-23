#ifndef SUPPLIES_H
#define SUPPLIES_H

#include <Inventory/Entity.h>

class Supplies : public Entity{
  private:
    double _health;

  public:
    Supplies();
    Supplies(double);
    Supplies(const Supplies &s);
    virtual ~Supplies() override;

    Entity* clone() override;
    void addEntity(Entity* e) override;

    double getHealth() const;
    void setHealth(double health);
};

#endif
