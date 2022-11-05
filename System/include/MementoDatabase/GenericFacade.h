#ifndef GENERICFACADE_H
#define GENERICFACADE_H
#include <MementoDatabase/MementoFacade.h>
#include <../src/MementoDatabase/MementoFacade.cpp>

template <class T>
class GenericFacade: public MementoFacade {
  private:
    T memento;

  public:
    GenericFacade();
    ~GenericFacade();
    T getMemento();
    void setMemento(T);
};

#endif
