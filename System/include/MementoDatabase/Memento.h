#ifndef MEMENTO_H
#define MEMENTO_H
#include "Battle.h"
#include <vector>

template <class T>
class Memento {
  private:
    T memento;
    
  public:
    Memento();
    ~Memento();
    T getMemento();
    void setMemento(T);
};

#endif