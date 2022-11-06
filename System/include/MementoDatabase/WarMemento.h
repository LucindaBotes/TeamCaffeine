#ifndef WARMEMENTO_H
#define WARMEMENTO_H
#include <MementoDatabase/Memento.h>
#include <../src/MementoDatabase/Memento.cpp>
#include <ObserverPattern/Battle.h>
#include <../src/ObserverPattern/Battle.cpp>
#include <vector>

template <class T>
class WarMemento: public Memento {
  private:
    vector<> war_memento;

  public:
    WarMemento();
    ~WarMemento();
    T getMemento();
    void setMemento(T);
};

#endif
