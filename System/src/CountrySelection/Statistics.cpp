#include "Statistics.h"

using namespace std;

Statistics::Statistics() {
}

Statistics::Statistics(double health, double damage, double defence, GDP* gdp) {
  this->_health = health;
  this->_damage = damage;
  this->_defence = defence;
  this->_gdp = gdp;
}

Statistics::~Statistics() {
  delete _gdp;
}

double Statistics::getHealth() const {
  return _health;
}

double Statistics::getDamage() const {
  return _damage;
}

double Statistics::getDefence() const {
  return _defence;
}

GDP Statistics::getGDP() const {
  return *_gdp;
}

void Statistics::setHealth(double health) {
  _health = health;
} 

void Statistics::setDamage(double damage) {
  _damage = damage;
}

void Statistics::setDefence(double defence) {
  _defence = defence;
}
