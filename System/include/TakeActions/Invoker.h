#ifndef INVOKER_H
#define INVOKER_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
#include <vector>
#include <stack>
#include <string>

class Invoker {
  private:
    int member;
    int playerNumber;
    std::vector<Action*> actions;
    std::vector<Action*> actionTracker;

  public:
    Invoker(Battle * battle, int playerNumber);
    ~Invoker();
    int getMember();
    void setMember(int);

    void defendAlliance();
    void hold();
    void retreat();
    void surrender();
    void requestAlly();
    void attackEnemyAlliance();
};

#endif
