#ifndef HOLD_H
#define HOLD_H

#include "Action.h"
#include "Battle.h"
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
