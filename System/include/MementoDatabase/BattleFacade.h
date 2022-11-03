#ifndef BATTLEFACADE_H
#define BATTLEFACADE_H
#include <ObserverPattern/Battle.h>
#include <BattleMemento.h>
#include <vector>
//Battle class is Originator
//This is the Proxy
template <class T>
class BattleFacade {
  private:
    vector<BattleMemento> battle_state;

  public:
    BattleFacade();
    ~BattleFacade();
    Battle getMemento();
    void setMemento(Battle* b);
};

#endif
