#include <MementoDatabase/WarFacade.h>

using namespace std;

template <class T>
WarFacade<T>::WarFacade() {
}

template <class T>
WarFacade<T>::~WarFacade() {
}

template <class T>
T WarFacade<T>::getMemento() {
  return this->memento;
}

template <class T>
void WarFacade<T>::setMemento(T memento) {
  this->memento = memento;
}
