#ifndef DEFEND_H
#define DEFEND_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>

class Defend : public Action{
  private:
    int member;
    int playerNumber;
    Battle * battle;

  public:
    Defend(Battle * battle, int playerNumber);
    ~Defend();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif
