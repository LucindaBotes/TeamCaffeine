#ifndef SUPPLIES_H
#define SUPPLIES_H

#include <Inventory/Entity.h>

class Supplies : public Entity {
  private:
    double _health;

  public:
    Supplies();
    Supplies(const Supplies& soldiers);
    ~Supplies() override;
    double getHealth() const;
    void setHealth(double);
};

#endif
