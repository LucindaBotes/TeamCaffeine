#include <UserInterface/War.h>
// #include "War.h"

using namespace std;

War::War() 
{

}

/// @brief it initializes warname and activeness of the war
/// @param wName 
/// @param Active 
War::War(string wName,bool Active)
{
  _warName = wName;
  _active = Active;
}

War::~War() 
{
  
}

/// @brief check if the war is still active or not
/// @return activeness of war, true if active and false if not active
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

/// @brief adds a country in a _countriesAtWar vector
/// @param c 
void War::addCountry(Country& c)
{
  _countriesAtWar.push_back(c);
}

/// @brief adds a battle in a battles vector
/// @param b 
void War::addBattle(Battle& b)
{
  battles.push_back(b);
}

/// @brief sets the phase of the war
/// @param p 
void War::setPhase(WarPhaseState* p)
{
  //warPhaseC->setState(new p);
}

/// @brief sets the name of the war
/// @param name 
void War::setName(string name)
{
    _warName = name;
}

/// @brief sets the activeness of the war
/// @param activeness 
void setActive(bool activeness)
{
  _active = activeness;
}

/// @brief returns name of war
/// @return name of the war
string War::getName()
{
  return _warName;
}

/// @brief gets the countries at war
/// @return vector which contains the countries at war
vector<Country> War::getCountriesAtWar()
{
  return _countriesAtWar;
}

/// @brief gets the battles at war
/// @return vector which contains the battles at war
vector<Battle> War::getBattle()
{
  return battles;
}