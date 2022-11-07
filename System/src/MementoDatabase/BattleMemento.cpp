#include "BattleMemento.h"
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

BattleMemento::BattleMemento() {
   
}

BattleMemento::~BattleMemento() {
   
}

Battle* BattleMemento::getMemento() {
  Battle* temp = this->battle_memento.at(this->battle_memento.size() - 1);
  this->battle_memento.pop_back();
  return temp;
}

void BattleMemento::setMemento(Battle* m) {
  BattleDatabase* bd = new BattleDatabase();
  this->battle_memento.push_back(bd->setMemento());
}
