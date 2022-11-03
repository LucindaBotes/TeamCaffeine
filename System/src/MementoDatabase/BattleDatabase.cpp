#include <MementoDatabase/BattleDatabase.h>

using namespace std;

template <class T>
BattleDatabase<T>::BattleDatabase() {
}

template <class T>
BattleDatabase<T>::~BattleDatabase() {
}

template <class T>
Battle BattleDatabase<T>::getMemento() {
  return this->battle_memento.pop_back();
}

template <class T>
void BattleDatabase<T>::setMemento(Battle* b) {
  this->battle_memento.push_back(b);
}
