#include "Country.h"
#include <iostream>
#include <vector>

using namespace std;

/** 
*  @file Country.h
*  @brief Country class implementation,
*
*  @details Country implements the base @file Country.h class.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366
*/

/**
 * @brief Create Country:: Create Country object and initializes members.
 * @details Create Country object and initializes @code _name @endcode member to an empty string and @code _allies @endcode member an empty vector and @code _stats, _inventoryShop @endcode members to their respective default constructors.
 * @return Country
 */
Country::Country() {
  _name = "";
  _allies = new vector<Country*>();
  _stats = new Statistics();
  _inventoryShop = new InventoryShop();
}

Country::Country(std::string name)
{
  this->_name = name;
  this->_allies = new vector<Country*>();
  this->_stats->generateStats();
  this->_inventoryShop = new InventoryShop();
}

/**
 * @brief Create Country:: Create Country object.
 * @details Create Country object and initializes @code _name, _allies, _stats, _inventoryShop @endcode members to passed in parameters @code name, allies, stats, inventoryShop @endcode respectively.
 * @param name string
 * @param allies vector<Country*>*
 * @param stats Statistics*
 * @param inventoryShop InventoryShop*
 * @return Country
 */
Country::Country(string name, vector<Country*>* allies, Statistics* stats, InventoryShop* inventoryShop) {
  _name = name;
  _allies = allies;
  _stats = stats;
  _inventoryShop = inventoryShop;
}

/**
 * @brief Destroy the Country:: Country object
 */
Country::~Country() {
  delete _stats;
  delete _inventoryShop;
}

/**
 * @brief Get Country:: Get the name of the Country object
 * @details Get Country:: Gets the @code _name @endcode member of the Country object.
 * @return string const
 */
string Country::getName() const {
  return _name;
}

/**
 * @brief Get Country:: Get the allies of the Country object
 * @details Get Country:: Gets the @code _allies @endcode member of the Country object.
 * @return vector<Country*>*
 */
vector<Country*> Country::getAllies() {
  return *_allies;
}

/**
 * @brief Get Country:: Get the statistics of the Country object
 * @details Get Country:: Gets the @code _stats @endcode member of the Country object.
 * @return Statistics
 */
Statistics Country::getStats() {
  return *(_stats);
}

/**
 * @brief Get Country:: Get the inventory shop of the Country object
 * @details Get Country:: Gets the @code _inventoryShop @endcode member of the Country object.
 * @return InventoryShop
 */
InventoryShop Country::getInventoryShop() const {
  return *_inventoryShop;
}

/**
 * @brief Add Country:: Add a country to the allies of the Country object
 * @details Add Country:: Adds the passed in Country object to the @code _allies @endcode member of the Country object.
 * @param ally Country*
 */
void Country::addAlly(Country* ally) {
  _allies->push_back(ally);
}

/**
 * @brief Remove Country:: Remove a country from the allies of the Country object
 * @details Remove Country:: Removes the passed in Country object from the @code _allies @endcode member of the Country object.
 * @param ally Country*
 */
void Country::removeAlly(Country* ally) {
  for (int i = 0; i < _allies->size(); i++) {
    if (_allies->at(i) == ally) {
      _allies->erase(_allies->begin() + i);
    }
  }
}

/**
 * @brief Get Country:: Get the allies of the Country object
 * @details Gets the @code _allies @endcode member of the Country object.
 * @return std::vector<Country*>
 */
void Country::printStats()
{
  cout << "Country: " << this->_name << endl;
  cout << "Health: " << this->_stats->getHealth() << endl;
  cout << "Attack: " << this->_stats->getDamage() << endl;
  cout << "Defense: " << this->_stats->getDefence() << endl;
}
