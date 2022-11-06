#ifndef WAR_H
#define WAR_H

#include "Invoker.h"
#include "Battle.h"
#include "Country.h"
#include <vector>
#include <string>
#include <iostream>
#include "Country.h"
#include "WarPhaseContext.h"
#include "Battle.h"
#include "Strategy.h"

class War : public ActionListener {
  private:
    string _warName;
    bool _active;
    Country * country_1;
    Country * country_2;
    Invoker * Player_1;
    Invoker * Player_2;
    WarPhaseContext* warPhaseC;
  
  protected:
    std::vector<Battle*> battles;//MEMENTO SHOULD MAKE US OF THIS LIST!!
  
  public:
    std::vector<Country*> Countries_Eligible_for_War;
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
    void setName(string name);
    void setActive(bool activeness);
    string getName();
    vector<Battle*> getBattle();
    void printCountries();
    void update();
    
};
#endif