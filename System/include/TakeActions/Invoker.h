
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
    int nextaction = -1;
    std::vector<Action*> actions;
    std::vector<Action*> actionTracker;

  public:
    Invoker(int playerNumber);
    ~Invoker();
    int getMember();
    void setMember(int);
    void setBattleActions(Battle * battle);
    void defendAlliance();
    void hold();
    void surrender();
    void requestAlly();
    void attackEnemyAlliance();
    void nextAction(int action);
    int getNextAction();
};

#endif
