#ifndef MEMENTOFACADE_H
#define MEMENTOFACADE_H
#include <ObserverPattern/Battle.h>
#include <../src/ObserverPattern/Battle.cpp>
#include <vector>

template <class T>
class MementoFacade {
  private:
    T memento;

  public:
    MementoFacade();
    ~MementoFacade();
    T getMemento();
    void setMemento(T);
};

#endif
