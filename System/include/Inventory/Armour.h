#ifndef ARMOUR_H
#define ARMOUR_H

#include <Inventory/EntityDecorator.h>

class Armour : public EntityDecorator{
  protected:
    double _armour;

  public:
    Armour();
    Armour(double);
    Armour(const Armour &a);
    ~Armour();

    Entity* clone() override;
    void addEntity(Entity* e) override;

    double getArmour() const;
    void setArmour(double armour);

};

#endif
