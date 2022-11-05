#include <MementoDatabase/InventoryFacade.h>

using namespace std;

template <class T>
InventoryFacade<T>::InventoryFacade() {
}

template <class T>
InventoryFacade<T>::~InventoryFacade() {
}

template <class T>
T InventoryFacade<T>::getMemento() {
  return this->memento;
}

template <class T>
void InventoryFacade<T>::setMemento(T memento) {
  this->memento = memento;
}
