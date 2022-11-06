#include <CountrySelection/Statistics.h>

using namespace std;

Statistics::Statistics() {
  this->random = Randomizer();
}

Statistics::Statistics(double health, double damage, double defence, GDP* gdp) {
  this->_health = health;
  this->_damage = damage;
  this->_defence = defence;
  this->_gdp = gdp;
  this->random = Randomizer();
}

Statistics::~Statistics() {
  delete _gdp;
}

/*Added by Erik*/
void Statistics::copy(double health, double damage, double defence, GDP* gdp) {
  double newGDP = gdp->getValue();
  copy(health, damage, defence, newGDP);
}

Statistics Statistics::copy(Statistics* stats) {
  double health = stats->getHealth();
  double damage = stats->getDamage();
  double defence = stats->getDefence();
  double gdp = stats->getGDP().getValue();
  Statistics newStats = Statistics(health, damage, defence, new GDP(gdp));
  return newStats;
}

Statistics Statistics::copy(double health, double damage, double defence, double gdp) {
  Statistics newStats = Statistics(health, damage, defence, new GDP(gdp));
  return newStats;
}
/*Added by Erik*/

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

void Statistics::setGDP(double gdp)
{
  this->_gdp->setValue(gdp);
}

void Statistics::generateStats()
{
  this->_damage = random.getRandomInt(10);
  this->_gdp->setValue(random.getRandomInt(100));
  this->_health = random.getRandomInt(100);
  this->_defence = random.getRandomInt(20);
}
