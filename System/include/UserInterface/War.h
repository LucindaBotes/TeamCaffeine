#ifndef WAR_H
#define WAR_H

#include <string>
#include <iostream>
#include <vector>
#include <Country.h>
#include <WarPhaseContext.h>
#include <Battle.h>
#include <Strategy.h>

using namespace std;

class War 
{
  private:
    string _warName;
    bool _active;
    vector<Country> _countriesAtWar;
    WarPhaseContext* warPhaseC;
    vector<Battle> battles;

  public:
    War();
    War(string wName,bool Active);
    ~War();
    bool isActive();
    void addCountry(Country& c);
    void addBattle(Battle& b);
    void setPhase(WarPhaseState* p);

    void setName(string name);
    void setCountriesAtWar(Country country);
    void setBattle(Battle battle);
    void setActive(bool activeness);

    string getName();
    vector<Country> getCountriesAtWar();
    vector<Battle> getBattle();
    
};
#endif