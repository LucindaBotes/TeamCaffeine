#ifndef WAR_H
#define WAR_H

#include <TakeActions/Invoker.h>
#include <ObserverPattern/Battle.h>
#include <vector>

class War {
  private:
    int member;
    Invoker * Player_1;
    Invoker * Player_2;
    std::vector<Battle*> battles;


  public:
    War();
    ~War();
    int getMember();
    void setMember(int);
    void setPlayer1();
    void setPlayer2();
    Invoker * getPlayer1();
    Invoker * getPlayer2();
    void addBattle (Battle * battle);

};

#endif
