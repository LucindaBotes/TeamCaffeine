#ifndef INVENTORYMEMENTO_H
#define INVENTORYMEMENTO_H
#include <MementoDatabase/Memento.h>
#include <../src/MementoDatabase/Memento.cpp>
#include <vector>


template <class T>
class InventoryMemento: public Memento {
  private:
    T memento;

  public:
    InventoryMemento();
    ~InventoryMemento();
    T getMemento();
    void setMemento(T);
};

#endif
