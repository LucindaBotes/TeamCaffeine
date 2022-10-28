#ifndef ALLYACTION_H
#define ALLYACTION_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
class AllyAction : public Action{
  private:
    int member;
    Battle *battle;
  
  public:
    AllyAction(Battle * battle);
    ~AllyAction();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif
