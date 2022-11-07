#ifndef INVENTORYMEMENTO_H
#define INVENTORYMEMENTO_H
#include "Memento.h"
#include "InventoryShop.h"
#include <vector>


template <class T>
class InventoryMemento: public Memento {
  private:
    vector<InventoryShop> inventory_memento;

  public:
    InventoryMemento();
    ~InventoryMemento();
    InventoryShop getMemento();
    void setMemento(InventoryShop* m);
};

#endif
