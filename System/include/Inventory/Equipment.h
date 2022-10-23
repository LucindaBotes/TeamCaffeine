#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <vector>

#include <Inventory/Entity.h>

class Equipment : public Entity {
  private:
    std::vector<Entity*> _weapons;
    std::vector<Entity*> _medicine;
    std::vector<Entity*> _soldiers;
    std::vector<Entity*> _supplies;
    std::vector<Entity*> _armour;

  public:
    Equipment();
    Equipment(double);
    Equipment(const Equipment& e);
    ~Equipment() override;

    Entity* clone() override;

    std::vector<Entity*> getWeapons() const;
    std::vector<Entity*> getMedicine() const;
    std::vector<Entity*> getSoldiers() const;
    std::vector<Entity*> getSupplies() const;
    std::vector<Entity*> getArmour() const;
};

#endif