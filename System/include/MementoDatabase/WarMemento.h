#ifndef WARMEMENTO_H
#define WARMEMENTO_H
#include <MementoDatabase/Memento.h>
#include <../src/MementoDatabase/Memento.cpp>

template <class T>
class WarMemento: public Memento {
  private:
    T memento;

  public:
    WarMemento();
    ~WarMemento();
    T getMemento();
    void setMemento(T);
};

#endif
