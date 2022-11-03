#ifndef BATTLEFACADE_H
#define BATTLEFACADE_H
#include <MementoDatabase/MementoFacade.h>
#include <../src/MementoDatabase/MementoFacade.cpp>
#include <ObserverPattern/Battle.h>
#include <../src/ObserverPattern/Battle.cpp>
#include <vector>

template <class T>
class BattleFacade: public MementoFacade {
  private:
    vector<Battle> memento;

  public:
    BattleFacade();
    ~BattleFacade();
    Battle getMemento();
    void setMemento(Battle* b);
};

#endif
