#ifndef WARMEMENTO_H
#define WARMEMENTO_H
#include "Memento.h"
#include "Battle.h"
#include <vector>

template <class T>
class WarMemento: public Memento<T> {
  private:
    vector<T> war_memento;

  public:
    WarMemento();
    ~WarMemento();
    T getMemento();
    void setMemento(T);
};

#endif
