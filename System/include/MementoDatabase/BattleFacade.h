#ifndef BATTLEFACADE_H
#define BATTLEFACADE_H
#include <ObserverPattern/Battle.h>
#include <BattleMemento.h>
#include <Battle.h>
#include <vector>
//Battle class is Originator
//This is the Proxy
template <class T>
class BattleFacade {
  private:
    Battle * battle_Proxy;

  public:
    BattleFacade();
    ~BattleFacade();
    void getMementoData();
    Battle* sendMementoData();
};

#endif
