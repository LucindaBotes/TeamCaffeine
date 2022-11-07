#include "CountrySelection/Country.h"
#include <vector>

using namespace std;

Country::Country() {
}

Country::Country(std::string name)
{
  this->_name = name;
  this->_stats->generateStats();
}

Country::Country(string name, vector<Country*> allies, Statistics* stats, InventoryShop* inventoryShop) {
  _name = name;
  _allies = allies;
  _stats = stats;
  _inventoryShop = inventoryShop;
}

Country::~Country() {
  this->_allies.clear();
  delete _stats;
  delete _inventoryShop;
}

/*Added by Erik*/
Country* Country::copy(Country* country) {
  int memberCopy = country->getMember();
  string nameCopy = country->getName();
  vector<Country*> alliesCopy = country->getAllies();
  Statistics* statsCopy = &country->getStats();
  InventoryShop* inventoryShopCopy = &country->getInventoryShop();
  return copy(memberCopy, nameCopy, alliesCopy, statsCopy, inventoryShopCopy);
}

Country* Country::copy(int m, string n, vector<Country*> a, Statistics* s, InventoryShop* i) {
  Country* newCountry = this;
  newCountry->setMember(m);
  newCountry->setName(n);
  newCountry->setAllies(a);
  newCountry->setStats(s);
  newCountry->setInventoryShop(i);
  return newCountry;
}

void Country::setAllies(vector<Country*> allies) {
  for (int i=0; i<allies.size(); i++) 
        _allies.push_back(allies[i]);
}

void Country::setStats(Statistics* stats) {
  _stats = &stats->copy(stats);
}

void Country::setInventoryShop(InventoryShop* inventoryShop) {
  _inventoryShop = &inventoryShop->copy(inventoryShop);
}
/*Added by Erik*/

int Country::getMember() {
  return this->member;
}

void Country::setMember(int member) {
  this->member = member;
}

string Country::getName() const {
  return _name;
}

vector<Country*> Country::getAllies() {
  return _allies;
}

Statistics Country::getStats() const {
  return *_stats;
}

InventoryShop Country::getInventoryShop() const {
  return *_inventoryShop;
}

void Country::addAlly(Country * ally) {
  this->_allies.push_back(ally);
}

void Country::removeAlly(Country* ally) {
  for (int i = 0; i < _allies.size(); i++) {
    if (this->_allies[i]->getName() == ally->getName()) {
      this->_allies.erase(this->_allies.begin() + i);
    }
  }
}

void Country::setName(std::string name)
{
  this->_name = name;
}