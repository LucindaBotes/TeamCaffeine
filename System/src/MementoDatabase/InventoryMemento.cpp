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
T InventoryMemento<T>::getMemento() {
  return this->memento;
}

template <class T>
void InventoryMemento<T>::setMemento(T memento) {
  this->memento = memento;
}
