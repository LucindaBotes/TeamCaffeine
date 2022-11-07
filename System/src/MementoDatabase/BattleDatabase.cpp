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

/**
 * @brief Create BattleDatabase:: Create BattleDatabase object.
 */
BattleDatabase::BattleDatabase() {

}

/**
 * @brief Destroy BattleDatabase:: BattleDatabase object.
 */
BattleDatabase::~BattleDatabase() {

}

/**
 * @brief Get Memento:: Get the Memento object
 * @details Get Memento:: Gets the Memento object from the Proxy class.
 */
void BattleDatabase::getMemento() {
  BattleFacade * bf = new BattleFacade();
  this->battle_Caretaker = bf->sendMementoData();
}

/**
 * @brief Set Memento:: Set the Memento object
 * @details Set Memento:: Sets the Memento object that is received from the BattleMemento class.
 * @return Battle*
 */
Battle* BattleDatabase::setMemento() {
  return this->battle_Caretaker;
}
