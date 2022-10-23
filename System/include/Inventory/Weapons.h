#ifndef WEAPONS_H
#define WEAPONS_H

#include <Inventory/Entity.h>

class Weapons : public Entity{

  private:
    double _damage;
    double _armour;
    int _vehicles;

  public:
    Weapons();
    Weapons(double);
    Weapons(const Weapons &w);
    virtual ~Weapons() override;

    Entity* clone() override;
    void addEntity(Entity* e) override;

    double getDamage() const;
    double getArmour() const;
    int getVehicles() const;
    void setDamage(double damage);
    void setArmour(double armour);
    void setVehicles(int vehicles);
};

#endif
