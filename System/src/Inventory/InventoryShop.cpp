#include "InventoryShop.h"
#include "Weapons.h"
#include "Soldiers.h"
#include "Medics.h"
#include "Supplies.h"
#include "Armour.h"
#include "Randomizer.h"
#include <limits>

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
  this->_weapons = vector<Entity*>();
  this->_soldiers = vector<Entity*>();
  this->_medicine = vector<Entity*>();
  this->_supplies = vector<Entity*>();
  this->_armour = vector<Entity*>();

  this->_purchasable = vector<Entity*>();

  Soldiers* temp = new Soldiers();
  temp->setCount(Randomizer::getInstance()->getUniformRandomNumber(50, 100));
  temp->setDamage(Randomizer::getInstance()->getUniformRandomNumber(1, 3));
  temp->setArmour(Randomizer::getInstance()->getUniformRandomNumber(3, 5));

  this->_soldiers.push_back(temp);
}

/**
 * @brief Destroy InventoryShop:: Destroy InventoryShop object
 */
InventoryShop::~InventoryShop() {
}

vector<Entity*> InventoryShop::getWeapons() {
  return _weapons;
}

vector<Entity*> InventoryShop::getMedicine() {
  return _medicine;
}

vector<Entity*> InventoryShop::getSoldiers() {
  return _soldiers;
}

vector<Entity*> InventoryShop::getSupplies() {
  return _supplies;
}

vector<Entity*> InventoryShop::getArmour() {
  return _armour;
}

vector<Entity*> InventoryShop::getPurchasable() {
  return _purchasable;
}

/*Added by Erik*/
InventoryShop* InventoryShop::copy(InventoryShop* i) {
  vector<Entity*> weaponsCopy = i->getWeapons();
  vector<Entity*> medicineCopy = i->getMedicine();
  vector<Entity*> soldiersCopy = i->getSoldiers();
  vector<Entity*> suppliesCopy = i->getSupplies();
  vector<Entity*> armourCopy = i->getArmour();
  vector<Entity*> purchasableCopy = i->getPurchasable();
  return copy(weaponsCopy, medicineCopy, soldiersCopy, suppliesCopy, armourCopy, purchasableCopy);
}

InventoryShop* InventoryShop::copy(vector<Entity*> weapons, vector<Entity*> medicine, vector<Entity*> soldiers, vector<Entity*> supplies, vector<Entity*> armour, vector<Entity*> purchasable) {
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

  return shop;
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

void InventoryShop::printShop() {
  int soldierCount = 0;
  for (int j = 0; j < _soldiers.size(); j++) {
    Soldiers* currSoldier = dynamic_cast<Soldiers*>(_soldiers[j]);
    soldierCount += currSoldier->getCount();
  }

  cout<<"**************************************************"<<endl;
  cout << "INVENTORY SHOP:" << endl;
  cout<<"**************************************************"<<endl;
  for (int i = 0; i < _purchasable.size(); i++) {
    cout << "Option: #" << i + 1 << endl;
    switch(_purchasable[i]->getType()) {
      case EntityType::WEAPON:
      {
        Weapons* curr = dynamic_cast<Weapons*>(_purchasable[i]);
        cout << "Type: Weapon" << endl;
        cout << "Name: " << _purchasable[i]->getName() << endl;
        cout << "Damage: " << curr->getDamage() << endl;
        cout << "GDP cost:" << curr->getPrice() * soldierCount << endl;
        cout<<"--------------------------------------------------"<<endl;
        break;
      }
      case EntityType::MEDIC:
      {
        Medics* currMedic = dynamic_cast<Medics*>(_purchasable[i]);

        cout << "Type: Medicine" << endl;
        cout << "Name: " << _purchasable[i]->getName() << endl;
        cout << "Healing: " << currMedic->getHeal() << endl;
        cout << "GDP cost:" << currMedic->getPrice() * soldierCount << endl;
        cout<<"--------------------------------------------------"<<endl;
        break;
      }
      case EntityType::SOLDIER:
      {
        Soldiers* currSoldier = dynamic_cast<Soldiers*>(_purchasable[i]);

        cout << "Type: Soldier" << endl;
        cout << "Name: " << currSoldier->getName() << endl;
        cout << "Armour: " << currSoldier->getArmour() << endl;
        cout << "Damage: " << currSoldier->getDamage() << endl;
        cout << "Soldier: " << currSoldier->getCount() << endl;
        cout << "GDP cost:" << currSoldier->getPrice() << endl;
        cout<<"--------------------------------------------------"<<endl;
        break;
      }
      case EntityType::ARMOUR:
      {
        Armour* currArmour = dynamic_cast<Armour*>(_purchasable[i]);

        cout << "Type: Armour" << endl;
        cout << "Name: " << currArmour->getName() << endl;
        cout << "Armour: " << currArmour->getArmour() << endl;
        cout << "GDP cost:" << currArmour->getPrice() * soldierCount << endl;
        cout<<"--------------------------------------------------"<<endl;
        break;
      }
      default:
        break;
    }
  }
  cout<<"**************************************************"<<endl;
}

void InventoryShop::printInventory() {
  cout << "Inventory:" << endl;
  cout << "Weapons:" << endl;
  for (int i = 0; i < _weapons.size(); i++) {
    cout << _weapons[i]->getName() << endl;
  }
  cout << "Medicine:" << endl;
  for (int i = 0; i < _medicine.size(); i++) {
    cout << _medicine[i]->getName() << endl;
  }
  cout << "Soldiers:" << endl;
  for (int i = 0; i < _soldiers.size(); i++) {
    cout << _soldiers[i]->getName() << endl;
  }
  cout << "Supplies:" << endl;
  for (int i = 0; i < _supplies.size(); i++) {
    cout << _supplies[i]->getName() << endl;
  }
  cout << "Armour:" << endl;
  for (int i = 0; i < _armour.size(); i++) {
    cout << _armour[i]->getName() << endl;
  }
}

bool InventoryShop::hasHydrogen()
{
  for (int i = 0; i < _weapons.size(); i++) {
    Weapons* curr = dynamic_cast<Weapons*>(_weapons[i]);
    if (curr->getDamage() == std::numeric_limits<double>::infinity()) {
      return true;
    }
  }
  return false;
}
