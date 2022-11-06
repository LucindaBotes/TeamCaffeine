#include "WarMemento.h"
#include "Memento.h"

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
