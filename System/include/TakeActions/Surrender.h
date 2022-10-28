#ifndef SURRENDER_H
#define SURRENDER_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
class Surrender : public Action{
  private:
    int member;
    Battle *battle;
  
  public:
    Surrender(Battle * battle);
    ~Surrender();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif
