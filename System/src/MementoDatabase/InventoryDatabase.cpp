#include <MementoDatabase/InventoryDatabase.h>

using namespace std;

template <class T>
InventoryDatabase<T>::InventoryDatabase() {
}

template <class T>
InventoryDatabase<T>::~InventoryDatabase() {
}

template <class T>
T InventoryDatabase<T>::getMemento() {
  return this->memento;
}

template <class T>
void InventoryDatabase<T>::setMemento(T memento) {
  this->memento = memento;
}
