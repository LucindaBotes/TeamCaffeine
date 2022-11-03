#include <CountrySelection/Country.h>
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