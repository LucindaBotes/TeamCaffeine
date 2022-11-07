#include "MementoDatabase/BattleDatabase.h"
/** 
*  @file BattleDatabase.h
*  @brief BattleDatabase class implementation (Caretaker)
*  Design Patterns:
*  @li Memento: Caretaker participant
*
*  @details The Caretaker class in the Memento design pattern that controll the access to the Memento object.
*  
*  @author Erik Koekemoer; u19011866
*/

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
