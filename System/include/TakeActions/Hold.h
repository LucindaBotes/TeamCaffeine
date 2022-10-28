#ifndef HOLD_H
#define HOLD_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
class Hold : public Action{
  private:
    int member;
    Battle *battle;

  public:
    Hold(Battle * battle);
    ~Hold();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif
