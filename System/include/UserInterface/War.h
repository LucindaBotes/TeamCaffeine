#ifndef WAR_H
#define WAR_H

#include <ObserverPattern/BattleListener.h>

class War : public BattleListener{
  private:
    int member;
    BattleListener * listener;

  public:
    War();
    War(BattleListener * listener);
    ~War();
    int getMember();
    void setMember(int);
    void update();
};

#endif
