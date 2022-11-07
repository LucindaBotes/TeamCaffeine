#include "BattleDatabase.h"
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

BattleDatabase::BattleDatabase() {
  //wat gebeur hier? lol
}

void BattleDatabase::getMemento() {
  BattleFacade * bf = new BattleFacade();
  this->battle_Caretaker = bf->sendMementoData();
}

Battle* BattleDatabase::setMemento() {
  return this->battle_Caretaker;
}
