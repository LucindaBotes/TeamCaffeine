#include "MementoDatabase/BattleDatabase.h"

using namespace std;

template <class T>
BattleDatabase<T>::BattleDatabase() {
  //wat gebeur hier? lol
}

template <class T>
void BattleDatabase<T>::getMemento() {
  BattleFacade * bf = new BattleFacade();
  this->battle_Caretaker = bf->sendMementoData();
}

template <class T>
Battle* BattleDatabase<T>::setMemento() {
  return this->battle_Caretaker;
}
