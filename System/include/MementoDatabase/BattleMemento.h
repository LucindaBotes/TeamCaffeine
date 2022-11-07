#ifndef BATTLEMEMENTO_H
#define BATTLEMEMENTO_H
#include "ObserverPattern/Battle.h"
#include "BattleDatabase.h"
#include <vector>
//Memento
template <class T>
class BattleMemento {
  private:
    vector<Battle*> battle_memento;

  public:
    BattleMemento();
    Battle* getMemento();
    void setMemento(Battle* b);
};

#endif
