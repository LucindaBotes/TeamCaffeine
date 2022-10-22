#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <Inventory/Entity.h>

class Soldiers : public Entity {
  private:
    double _damage;
    double _armour;
    int _count;

  public:
    Soldiers();
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
