#include <MementoDatabase/BattleMemento.h>

using namespace std;

template <class T>
BattleMemento<T>::BattleMemento() {
   
}

template <class T>
Battle* BattleMemento<T>::getMemento() {
  return this->battle_memento.pop_back();
}

template <class T>
void BattleMemento<T>::setMemento(Battle* m) {
  BattleDatabase bd = new BattleDatabase();
  this->battle_memento.push_back(bd->setMemento());
}
