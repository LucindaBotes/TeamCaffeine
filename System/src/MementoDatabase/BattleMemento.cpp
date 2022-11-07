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

/**
 * @brief Create BattleMemento:: Create BattleMemento object.
 */
BattleMemento::BattleMemento() {
   
}

/**
 * @brief Destroy BattleMemento:: Destroy BattleMemento object.
 */
BattleMemento::~BattleMemento() {
   
}

/**
 * @brief Get BattleMemento:: Get the BattleMemento object
 * @details Get BattleMemento:: Gets the BattleMemento object from the BattleDatabase class.
 * @return Battle*
 */
Battle* BattleMemento::getMemento() {
  Battle* temp = this->battle_memento.at(this->battle_memento.size() - 1);
  this->battle_memento.pop_back();
  return temp;
}

/**
 * @brief Set BattleMemento:: Set the BattleMemento object
 * @details Set BattleMemento:: Sets the BattleMemento object that is received from the BattleDatabase class.
 * @param Battle*
 */
void BattleMemento::setMemento(Battle* m) {
  BattleDatabase* bd = new BattleDatabase();
  this->battle_memento.push_back(bd->setMemento());
}
