#ifndef WAR_H
#define WAR_H

#include <TakeActions/Invoker.h>
#include <ObserverPattern/Battle.h>
#include <CountrySelection/Country.h>
#include <vector>
#include <string>
#include <iostream>
#include <Country.h>
#include <WarPhaseContext.h>
#include <Battle.h>
#include <Strategy.h>

class War {
  private:
    string _warName;
    bool _active;
    Country * country_1;
    Country * country_2;
    Invoker * Player_1;
    Invoker * Player_2;
    std::vector<Battle*> battles;
    WarPhaseContext* warPhaseC;
    
  public:
    std::vector<Country*> Countries_Eligible_for_War;
    //std::vector<Country*> Countries_at_War;
    War();
    War(string wName,bool Active);
    ~War();
    void setPlayer1_Country(std::string);
    void setPlayer2_Country(std::string);
    Country * getPlayer1_Country();
    Country * getPlayer2_Country();
    void setPlayer1();
    void setPlayer2();
    Invoker * getPlayer1();
    Invoker * getPlayer2();
    void addBattle (Battle * battle);
    void initializeCountries();
    bool isActive();
    void setPhase(WarPhaseState* p);
    void setName(string name);
    void setActive(bool activeness);
    string getName();
    vector<Country> getCountriesAtWar();
    vector<Battle> getBattle();
    
};
#endif