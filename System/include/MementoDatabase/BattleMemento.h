#ifndef BATTLEMEMENTO_H
#define BATTLEMEMENTO_H
#include <ObserverPattern/Battle.h>
#include <../src/ObserverPattern/Battle.cpp>
#include <vector>
//Memento
template <class T>
class BattleMemento {
  private:
    vector<Battle> battle_memento;

  public:
    BattleMemento();
    ~BattleMemento();
    Battle getMemento();
    void setMemento(Battle* b);
};

#endif
