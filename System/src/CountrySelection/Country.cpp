#include <CountrySelection/Country.h>

using namespace std;

Country::Country() {
}

Country::Country(string name, vector<Country>* allies, Statistics* stats, InventoryShop* inventoryShop) {
  _name = name;
  _allies = allies;
  _stats = stats;
  _inventoryShop = inventoryShop;
}

Country::~Country() {
  delete _allies;
  delete _stats;
  delete _inventoryShop;
}

string Country::getName() const {
  return _name;
}

vector<Country> Country::getAllies() const {
  return *_allies;
}

Statistics Country::getStats() const {
  return *_stats;
}

InventoryShop Country::getInventoryShop() const {
  return *_inventoryShop;
}

void Country::addAllies(vector<Country> allies) {
  for (int i = 0; i < allies.size(); i++) {
    _allies->push_back(allies[i]);
  }
}

void Country::addAlly(Country ally) {
  _allies->push_back(ally);
}

void Country::removeAlly(Country ally) {
  for (int i = 0; i < _allies->size(); i++) {
    if (_allies->at(i).getName() == ally.getName()) {
      _allies->erase(_allies->begin() + i);
    }
  }
}

void Country::removeAllies(vector<Country> toRemove) {
  for (int i = 0; i < toRemove.size(); i++) {
    for (int j = 0; j < _allies->size(); j++) {
      if (_allies->at(j).getName() == toRemove[i].getName()) {
        _allies->erase(_allies->begin() + j);
      }
    }
  }
}
