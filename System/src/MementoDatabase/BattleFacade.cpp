#include <MementoDatabase/BattleFacade.h>

using namespace std;

template <class T>
BattleFacade<T>::BattleFacade() {
}

template <class T>
BattleFacade<T>::~BattleFacade() {
}

template <class T>
Battle BattleFacade<T>::getMemento() {
  return this->memento.pop_back();
}

template <class T>
void BattleFacade<T>::setMemento(Battle* m) {
  this->memento.pop_back(m);
}
