#ifndef DEFEND_H
#define DEFEND_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>

class Defend : public Action{
  private:
    int member;
    Battle * battle;

  public:
    Defend(Battle * battle);
    ~Defend();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif
