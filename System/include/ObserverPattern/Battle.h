#ifndef BATTLE_H
#define BATTLE_H

#include "CountrySelection/Country.h"
#include "UserInterface/War.h"
#include "TakeActions/Invoker.h"
#include <vector>
#include <string>

class Battle {
  private:
    War * war;
    int member;
    std::string name;
    std::vector<Country*> Alliance_A;
    std::vector<Country*> Alliance_B;

  public:
    Battle();
    ~Battle();  
    /*Added by Erik*/
    Battle* copy(Battle*);
    std::vector<Country*> allianceDeepCopy(std::vector<Country*>);
    /*Added by Erik*/
    void start(Invoker * player1, Invoker * player2);
    int getMember();
    void setMember(int);
    void setPlayerAllies(Country * player1, Country * player2);
    void defend(int playerNumber);
    void hold(int playerNumber);
    void surrender(int playerNumber);
    void allyAction(int playerNumber);
    void attack(int playerNumber);
    double calculateDamage(int playerNumber);
    void displayEligibleCountries();
    double calculateHealth(int);
    void checkifAllyDied(int playerNumber);
};

#endif
