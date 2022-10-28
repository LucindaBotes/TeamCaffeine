#ifndef INVOKER_H
#define INVOKER_H

#include <TakeActions/Action.h>
#include <ObserverPattern/Battle.h>
#include <vector>
#include <stack>

class Invoker {
  private:
    int member;
    std::vector<Action*> actions;
    std::vector<Action*> actionTracker;

  public:
    Invoker(Battle * battle);
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
