#ifndef BATTLEFACADE_H
#define BATTLEFACADE_H
#include <ObserverPattern/Battle.h>
#include <../src/ObserverPattern/Battle.cpp>
#include <vector>
//Originator
template <class T>
class BattleFacade {
  private:
    vector<Battle> memento;

  public:
    BattleFacade();
    ~BattleFacade();
    Battle getMemento();
    void setMemento(Battle* b);
};

#endif
