#ifndef BATTLEFACADE_H
#define BATTLEFACADE_H
#include "BattleMemento.h"
#include "Battle.h"
#include <vector>
//Battle class is Originator
//This is the Proxy
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
