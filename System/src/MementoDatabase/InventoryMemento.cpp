#include <MementoDatabase/InventoryMemento.h>
#include <MementoDatabase/Memento.h>
#include <../src/MementoDatabase/Memento.cpp>

using namespace std;

template <class T>
InventoryMemento<T>::InventoryMemento() {
}

template <class T>
InventoryMemento<T>::~InventoryMemento() {
}

template <class T>
InventoryShop InventoryMemento<T>::getMemento() {
  return this->inventory_memento.pop_back();
}

template <class T>
void InventoryMemento<T>::setMemento(InventoryShop* m) {
  this->inventory_memento.push_back(m);
}
