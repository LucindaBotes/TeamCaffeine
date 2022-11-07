#ifndef BATTLEMEMENTO_H
#define BATTLEMEMENTO_H
#include "Battle.h"
#include <vector>
//Memento
template <class T>
class BattleMemento {
  private:
    vector<Battle> battle_memento;

  public:
    BattleMemento(/*all the stuff needed for the memento (stats, battles, gdp, etc.)*/);
    Battle getMemento();
    void setMemento(Battle* b);
};

#endif
