#ifndef INVENTORYDATABASE_H
#define INVENTORYDATABASE_H
#include "Databases.h"
#include <vector>


template <class T>
class InventoryDatabase: public Databases {
  private:
    T memento;

  public:
    InventoryDatabase();
    ~InventoryDatabase();
    T getMemento();
    void setMemento(T);
};

#endif
