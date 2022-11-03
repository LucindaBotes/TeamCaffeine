#include <MementoDatabase/BattleMemento.h>
#include <MementoDatabase/Memento.h>
#include <../src/MementoDatabase/Memento.cpp>

using namespace std;

template <class T>
BattleMemento<T>::BattleMemento() {
}

template <class T>
BattleMemento<T>::~BattleMemento() {
}

template <class T>
Battle BattleMemento<T>::getMemento() {
  return this->memento.push_back();
}

template <class T>
void BattleMemento<T>::setMemento(Battle* m) {
  this->memento.pop_back(m);
}
