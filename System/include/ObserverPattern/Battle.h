#ifndef BATTLE_H
#define BATTLE_H

#include <CountrySelection/Country.h>
#include <TakeActions/Invoker.h>
#include <vector>

class Battle {
  private:
    int member;
    std::vector<Country*> Alliance_A;
    std::vector<Country*> Alliance_B;
    

  public:
    Battle();
    ~Battle();
    void start(Invoker * player1, Invoker * player2);
    int getMember();
    void setMember(int);
    
    void defend(int playerNumber);
    void hold(int playerNumber);
    void retreat(int playerNumber);
    void surrender(int playerNumber);
    void allyAction(int playerNumber);
    void attack(int playerNumber);
};

#endif
