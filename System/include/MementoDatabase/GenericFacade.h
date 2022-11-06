#ifndef GENERICFACADE_H
#define GENERICFACADE_H
#include "MementoFacade.h"

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
