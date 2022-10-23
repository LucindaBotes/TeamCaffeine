#ifndef INVOKER_H
#define INVOKER_H

#include <TakeActions/Action.h>
#include <vector>

class Invoker {
  private:
    int member;
    std::vector<Action*> actions;

  public:
    Invoker();
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
