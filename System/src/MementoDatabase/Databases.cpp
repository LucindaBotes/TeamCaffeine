#include <MementoDatabase/Databases.h>

using namespace std;

template <class T>
Databases<T>::Databases() {
}

template <class T>
Databases<T>::~Databases() {
}

template <class T>
T Databases<T>::getMemento() {
  return this->memento;
}

template <class T>
void Databases<T>::setMemento(T memento) {
  this->memento = memento
}
