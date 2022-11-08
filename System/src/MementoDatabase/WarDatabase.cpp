#include "WarDatabase.h"

using namespace std;

template <class T>
WarDatabase<T>::WarDatabase() {
}

template <class T>
WarDatabase<T>::~WarDatabase() {
}

template <class T>
T WarDatabase<T>::getMemento() {
  return this->memento;
}

template <class T>
void WarDatabase<T>::setMemento(T memento) {
  this->memento = memento;
}
