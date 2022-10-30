#ifndef SURRENDER_H
#define SURRENDER_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
class Surrender : public Action{
  private:
    int member;
    int playerNumber;
    Battle *battle;
  
  public:
    Surrender(Battle * battle, int playerNumber);
    ~Surrender();
    int getMember();
    void setMember(int);

    virtual void executeAction();
};

#endif
