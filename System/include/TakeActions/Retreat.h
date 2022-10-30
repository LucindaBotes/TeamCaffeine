#ifndef RETREAT_H
#define RETREAT_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
class Retreat : public Action{
  private:
    int member;
    int playerNumber;
    Battle *battle;

  public:
    Retreat(Battle * battle, int playerNumber);
    ~Retreat();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif
