#ifndef INVENTORYFACADE_H
#define INVENTORYFACADE_H
#include "MementoFacade.h"
#include <vector>


template <class T>
class InventoryFacade: public MementoFacade {
  private:
    T memento;

  public:
    InventoryFacade();
    ~InventoryFacade();
    T getMemento();
    void setMemento(T);
};

#endif
