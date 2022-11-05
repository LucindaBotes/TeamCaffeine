#include <Inventory/InventoryShop.h>

using namespace std;

InventoryShop::InventoryShop() {
}

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

/*Added by Erik*/
InventoryShop InventoryShop::copy(vector<Entity*> weapons, vector<Entity*> medicine, vector<Entity*> soldiers, vector<Entity*> supplies, vector<Entity*> armour, vector<Entity*> purchasable) {
  InventoryShop* shop = new InventoryShop();
  vector<Entity*> weaponsCopy;
  vector<Entity*> medicineCopy;
  vector<Entity*> soldiersCopy;
  vector<Entity*> suppliesCopy;
  vector<Entity*> armourCopy;
  vector<Entity*> purchasableCopy;

  for (int i=0; i<weapons.size(); i++) 
        weaponsCopy.push_back(weapons[i]);

  for (int i=0; i<medicine.size(); i++) 
        medicineCopy.push_back(medicine[i]);

  for (int i=0; i<soldiers.size(); i++) 
        soldiersCopy.push_back(soldiers[i]);

  for (int i=0; i<supplies.size(); i++) 
        suppliesCopy.push_back(supplies[i]);

  for (int i=0; i<armour.size(); i++) 
        armourCopy.push_back(armour[i]);

  for (int i=0; i<purchasable.size(); i++) 
        purchasableCopy.push_back(purchasable[i]);

  shop->_weapons = weaponsCopy;
  shop->_medicine = medicineCopy;
  shop->_soldiers = soldiersCopy;
  shop->_supplies = suppliesCopy;
  shop->_armour = armourCopy;
  shop->_purchasable = purchasableCopy;

  return *shop;
}

void InventoryShop::setVectors(vector<Entity*> weapons, vector<Entity*> medicine, vector<Entity*> soldiers, vector<Entity*> supplies, vector<Entity*> armour, vector<Entity*> purchasable) {
  _weapons = weapons;
  _medicine = medicine;
  _soldiers = soldiers;
  _supplies = supplies;
  _armour = armour;
  _purchasable = purchasable;
}
/*Added by Erik*/

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
