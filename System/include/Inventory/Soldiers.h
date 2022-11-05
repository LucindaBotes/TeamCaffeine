#ifndef SOLDIERS_H
#define SOLDIERS_H

#include "Entity.h"
#include "Randomizer.h"

class Soldiers : public Entity {
  private:
    double _damage;
    double _armour;
    int _count;

  public:
    Soldiers();
    Soldiers(double, double, int);
    Soldiers(const Soldiers& soldiers);
    ~Soldiers() override;
    
    Entity* clone() override;
    
    double getDamage() const;
    double getArmour() const;
    int getCount() const;
    void setDamage(double damage);
    void setArmour(double armour);
    void setCount(int count);
};

#endif
