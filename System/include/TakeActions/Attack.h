#ifndef ATTACK_H
#define ATTACK_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
class Attack : public Action{
  private:
    int member;
    Battle *battle;

  public:
    Attack(Battle * battle);
    ~Attack();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif
