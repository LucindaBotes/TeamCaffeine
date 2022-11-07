#include "MementoDatabase/BattleMemento.h"
/** 
*  @file BattleMemento.h
*  @brief BattleMemento class implementation (Memento)
*  Design Patterns:
*  @li Memento: Memento participant
*
*  @details The Memento class in the Memento design pattern that stores the state of the Originator object.
*  
*  @author Erik Koekemoer; u19011866
*/

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
