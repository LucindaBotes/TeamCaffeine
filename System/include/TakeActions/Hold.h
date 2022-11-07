#ifndef HOLD_H
#define HOLD_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
class Hold : public Action{
  private:
    int member;
    int playerNumber;
    Battle *battle;

  public:
    Hold(Battle * battle, int playerNumber);
    ~Hold();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif

