#ifndef BATTLE_H
#define BATTLE_H

#include <CountrySelection/Country.h>
#include <TakeActions/Invoker.h>
#include <vector>
#include <string>

class Battle {
  private:
    int member;
    std::string name;
    std::vector<Country*> Alliance_A;
    std::vector<Country*> Alliance_B;
    

  public:
    //copy constructor for Battle
    Battle(std::string name);
    ~Battle();
    void start(Invoker * player1, Invoker * player2);
    int getMember();
    void setMember(int);
    void setPlayerCountries(Country * player1, Country * player2);
    void defend(int playerNumber);
    void hold(int playerNumber);
    void surrender(int playerNumber);
    void allyAction(int playerNumber);
    void attack(int playerNumber);
};

#endif
