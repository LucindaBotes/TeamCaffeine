#ifndef INVENTORYSHOP_H
#define INVENTORYSHOP_H

#include <vector>

#include "Entity.h"

class InventoryShop {
  private:
    std::vector<Entity*> _weapons;
    std::vector<Entity*> _medicine;
    std::vector<Entity*> _soldiers;
    std::vector<Entity*> _supplies;
    std::vector<Entity*> _armour;

    std::vector<Entity*> _purchasable;

  public:
    InventoryShop();
    ~InventoryShop();
    std::vector<Entity*> getWeapons() const;
    std::vector<Entity*> getMedicine() const;
    std::vector<Entity*> getSoldiers() const;
    std::vector<Entity*> getSupplies() const;
    std::vector<Entity*> getArmour() const;

    std::vector<Entity*> getPurchasable() const;

    void addWeapon(Entity* e);
    void addMedicine(Entity* e);
    void addSoldier(Entity* e);
    void addSupply(Entity* e);
    void addArmour(Entity* e);

    void addPurchasable(Entity* e);

    void removeWeapon(Entity* e);
    void removeMedicine(Entity* e);
    void removeSoldier(Entity* e);
    void removeSupply(Entity* e);
    void removeArmour(Entity* e);

    void removePurchasable(Entity* e);

    void printShop();
    void printInventory();
};

#endif
