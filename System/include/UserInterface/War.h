#ifndef WAR_H
#define WAR_H

#include "Invoker.h"
#include "Battle.h"
#include "Country.h"
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
    War();
    ~War();
    int getMember();
    void setMember(int);
    void setPlayer1_Country(Country * player1Country);
    void setPlayer2_Country(Country * player2Country);
    Country * getPlayer1_Country();
    Country * getPlayer2_Country();
    void setPlayer1();
    void setPlayer2();
    Invoker * getPlayer1();
    Invoker * getPlayer2();
    void addBattle (Battle * battle);

};

#endif
