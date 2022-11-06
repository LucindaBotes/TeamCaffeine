#ifndef WARFACADE_H
#define WARFACADE_H
#include "MementoFacade.h"


template <class T>
class WarFacade: public MementoFacade {
  private:
    T memento;

  public:
    WarFacade();
    ~WarFacade();
    T getMemento();
    void setMemento(T);
};

#endif
