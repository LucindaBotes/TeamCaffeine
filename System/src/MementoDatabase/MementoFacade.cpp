#include "MementoFacade.h"

using namespace std;

template <class T>
MementoFacade<T>::MementoFacade() {
}

template <class T>
MementoFacade<T>::~MementoFacade() {
}

template <class T>
T MementoFacade<T>::getMemento() {
  return this->memento;
}

template <class T>
void MementoFacade<T>::setMemento(T memento) {
  this->memento = memento;
}
