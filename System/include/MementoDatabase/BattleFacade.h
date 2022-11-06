#ifndef BATTLEFACADE_H
#define BATTLEFACADE_H
#include "Battle.h"
#include "BattleMemento.h"
#include <vector>
//Battle class is Originator
//This is the Proxy
template <class T>
class BattleFacade {
  private:
    vector<T> battle_state;

  public:
    BattleFacade();
    ~BattleFacade();
    Battle getMemento();
    void setMemento(Battle* b);
};

#endif
