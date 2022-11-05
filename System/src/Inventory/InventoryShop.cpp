#include "InventoryShop.h"

using namespace std;

/** 
*  @file InventoryShop.h
*  @brief InventoryShop class implementation,
*
*  @details Provides the necessary methods to create and manage the inventory and shop for countries.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*/

/**
 * @brief Create InventoryShop:: Create InventoryShop object
 * @details Create InventoryShop object.
 * @returns InventoryShop
 */
InventoryShop::InventoryShop() {
  
}

/**
 * @brief Destroy InventoryShop:: Destroy InventoryShop object
 */
InventoryShop::~InventoryShop() {
}

vector<Entity*> InventoryShop::getWeapons() const {
  return _weapons;
}

vector<Entity*> InventoryShop::getMedicine() const {
  return _medicine;
}

vector<Entity*> InventoryShop::getSoldiers() const {
  return _soldiers;
}

vector<Entity*> InventoryShop::getSupplies() const {
  return _supplies;
}

vector<Entity*> InventoryShop::getArmour() const {
  return _armour;
}

vector<Entity*> InventoryShop::getPurchasable() const {
  return _purchasable;
}

void InventoryShop::addWeapon(Entity* e) {
  _weapons.push_back(e);
}

void InventoryShop::addMedicine(Entity* e) {
  _medicine.push_back(e);
}

void InventoryShop::addSoldier(Entity* e) {
  _soldiers.push_back(e);
}

void InventoryShop::addSupply(Entity* e) {
  _supplies.push_back(e);
}

void InventoryShop::addArmour(Entity* e) {
  _armour.push_back(e);
}

void InventoryShop::addPurchasable(Entity* e) {
  _purchasable.push_back(e);
}

void InventoryShop::removeWeapon(Entity* e) {
  for (int i = 0; i < _weapons.size(); i++) {
    if (_weapons[i] == e) {
      _weapons.erase(_weapons.begin() + i);
    }
  }
}

void InventoryShop::removeMedicine(Entity* e) {
  for (int i = 0; i < _medicine.size(); i++) {
    if (_medicine[i] == e) {
      _medicine.erase(_medicine.begin() + i);
    }
  }
}

void InventoryShop::removeSoldier(Entity* e) {
  for (int i = 0; i < _soldiers.size(); i++) {
    if (_soldiers[i] == e) {
      _soldiers.erase(_soldiers.begin() + i);
    }
  }
}

void InventoryShop::removeSupply(Entity* e) {
  for (int i = 0; i < _supplies.size(); i++) {
    if (_supplies[i] == e) {
      _supplies.erase(_supplies.begin() + i);
    }
  }
} 

void InventoryShop::removeArmour(Entity* e) {
  for (int i = 0; i < _armour.size(); i++) {
    if (_armour[i] == e) {
      _armour.erase(_armour.begin() + i);
    }
  }
}

void InventoryShop::removePurchasable(Entity* e) {
  for (int i = 0; i < _purchasable.size(); i++) {
    if (_purchasable[i] == e) {
      _purchasable.erase(_purchasable.begin() + i);
    }
  }
}
