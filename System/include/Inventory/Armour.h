#ifndef ARMOUR_H
#define ARMOUR_H

#include <Inventory/Entity.h>

class Armour : public Entity
{
protected:
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
