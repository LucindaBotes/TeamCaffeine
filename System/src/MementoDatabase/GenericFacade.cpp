#include "GenericFacade.h"

using namespace std;

template <class T>
GenericFacade<T>::GenericFacade() {
}

template <class T>
GenericFacade<T>::~GenericFacade() {
}

template <class T>
T GenericFacade<T>::getMemento() {
  return this->memento;
}

template <class T>
void GenericFacade<T>::setMemento(T memento) {
  this->memento = memento;
}
