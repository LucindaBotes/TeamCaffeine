#ifndef BATTLEMEMENTO_H
#define BATTLEMEMENTO_H
#include <MementoDatabase/Memento.h>
#include <../src/MementoDatabase/Memento.cpp>
#include <ObserverPattern/Battle.h>
#include <../src/ObserverPattern/Battle.cpp>
#include <vector>

template <class T>
class BattleMemento: public Memento {
  private:
    vector<Battle> memento;

  public:
    BattleMemento();
    ~BattleMemento();
    Battle getMemento();
    void setMemento(Battle* b);
};

#endif
