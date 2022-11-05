#ifndef INVENTORYMEMENTO_H
#define INVENTORYMEMENTO_H
#include <MementoDatabase/Memento.h>
#include <../src/MementoDatabase/Memento.cpp>
#include <Inventory/InventoryShop.h>
#include <../src/Inventory/InventoryShop.cpp>
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
