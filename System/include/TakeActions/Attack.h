#ifndef ATTACK_H
#define ATTACK_H

#include "Action.h"
#include "Battle.h"
class Attack : public Action{
  private:
    int member;
    int playerNumber;
    Battle *battle;

  public:
    Attack(Battle * battle, int playerNumber);
    ~Attack();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif
