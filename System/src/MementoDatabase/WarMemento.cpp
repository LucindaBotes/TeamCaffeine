#include "WarMemento.h"
#include <MementoDatabase/Memento.h>
#include <../src/MementoDatabase/Memento.cpp>

using namespace std;

template <class T>
WarMemento<T>::WarMemento() {
}

template <class T>
WarMemento<T>::~WarMemento() {
}

template <class T>
T WarMemento<T>::getMemento() {
  return this->memento;
}

template <class T>
void WarMemento<T>::setMemento(T memento) {
  this->memento = memento;
}
