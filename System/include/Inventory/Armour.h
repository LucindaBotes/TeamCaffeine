#ifndef ARMOUR_H
#define ARMOUR_H

#include "EntityDecorator.h"
#include "Randomizer.h"

class Armour : public EntityDecorator{
  private:
    double _armour;

public:
  Armour();
  Armour(double);
  Armour(const Armour &a);
  ~Armour();

  Entity *clone() override;
  double getArmour() const;
  void setArmour(double armour);
};

#endif
