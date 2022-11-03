#ifndef WAR_H
#define WAR_H

#include <TakeActions/Invoker.h>
#include <ObserverPattern/Battle.h>
#include <CountrySelection/Country.h>
#include <vector>

class War {
  private:
    int member;
    Country * country_1;
    Country * country_2;
    Invoker * Player_1;
    Invoker * Player_2;
    std::vector<Battle*> battles;
    
  
  public:
    std::vector<Country*> Countries_Eligible_for_War;
    //std::vector<Country*> Countries_at_War;
    War();
    ~War();
    int getMember();
    void setMember(int);
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


};

#endif
