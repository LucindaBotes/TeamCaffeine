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
    std::vector<Entity*> getWeapons();
    std::vector<Entity*> getMedicine();
    std::vector<Entity*> getSoldiers();
    std::vector<Entity*> getSupplies();
    std::vector<Entity*> getArmour();

    std::vector<Entity*> getPurchasable();

    /*Added by Erik*/
    InventoryShop* copy(InventoryShop*);
    InventoryShop* copy(std::vector<Entity*>,std::vector<Entity*>,std::vector<Entity*>,std::vector<Entity*>,std::vector<Entity*>,std::vector<Entity*>);
    void setVectors(std::vector<Entity*>,std::vector<Entity*>,std::vector<Entity*>,std::vector<Entity*>,std::vector<Entity*>,std::vector<Entity*>);
    /*Added by Erik*/

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
    bool hasHydrogen();
};

#endif
