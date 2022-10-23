#ifndef RETREAT_H
#define RETREAT_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
class Retreat : public Action{
  private:
    int member;
    Battle *battle;

  public:
    Retreat(Battle * battle);
    ~Retreat();
    int getMember();
    void setMember(int);

    virtual void executeAction();
    virtual void unexecuteAction();
};

#endif
