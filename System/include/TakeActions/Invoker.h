#ifndef INVOKER_H
#define INVOKER_H

class Invoker {
  #include <TakeActions/Action.h>
  private:
    int member;
    Action * actions = new Action[6];

  public:
    Invoker();
    ~Invoker();
    int getMember();
    void setMember(int);
    
    void defendAlliance();
    void attackEnemyAlliance();
    void hold();
    void retreat();
    void surrender();
    void requestAlly();
};

#endif
