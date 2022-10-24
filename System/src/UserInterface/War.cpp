#include <UserInterface/War.h>
// #include "War.h"

using namespace std;

War::War() 
{

}

War::War(string wName,bool Active)
{
  _warName = wName;
  _active = Active;
}

War::~War() 
{
  
}

bool War::isActive()
{
    if(_active == true)
    {
      return true;
    }
    else
    {
      return false;
    }
}

void War::addCountry(Country& c)
{
  _countriesAtWar.push_back(c);
}

void War::addBattle(Battle& b)
{
  battles.push_back(b);
}

void War::setPhase(WarPhaseState* p)
{
  //warPhaseC->setState(new p);
}

void War::setName(string name)
{
    _warName = name;
}

void War::setCountriesAtWar(Country country)
{
  _countriesAtWar.push_back(country);
}

void War::setBattle(Battle battle)
{
  battles.push_back(battle);
}

void setActive(bool activeness)
{
  //_active = activeness;
  
}

string War::getName()
{
  return _warName;
}

vector<Country> War::getCountriesAtWar()
{
  return _countriesAtWar;
}

vector<Battle> War::getBattle()
{
  return battles;
}