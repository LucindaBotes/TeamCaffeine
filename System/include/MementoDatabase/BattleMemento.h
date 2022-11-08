#ifndef BATTLEMEMENTO_H
#define BATTLEMEMENTO_H
#include "Battle.h"
#include "BattleDatabase.h"
#include <vector>
//Memento
class BattleMemento {
  private:
    vector<Battle*> battle_memento;

  public:
    BattleMemento();
    ~BattleMemento();
    Battle* getMemento();
    void setMemento(Battle* b);
};

#endif
