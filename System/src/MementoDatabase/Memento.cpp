#include <MementoDatabase/Memento.h>

using namespace std;

template <class T>
Memento<T>::Memento() {
}

template <class T>
Memento<T>::~Memento() {
}

template <class T>
T Memento<T>::getMemento() {
  return this->memento;
}

template <class T>
void Memento<T>::setMemento(T memento) {
  this->memento = memento;
}
