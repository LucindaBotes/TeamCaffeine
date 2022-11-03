#ifndef INVENTORYFACADE_H
#define INVENTORYFACADE_H
#include <MementoDatabase/MementoFacade.h>
#include <../src/MementoDatabase/MementoFacade.cpp>
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
