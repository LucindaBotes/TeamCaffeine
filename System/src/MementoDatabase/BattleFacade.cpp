#include "BattleFacade.h"
/** 
*  @file BattleFacade.h
*  @brief Proxy class implementation (Protection Proxy)
*  Design Patterns:
*  @li Proxy: Proxy participant
*
*  @details Provides another class to go throug before the Memento class can be accessed.
*  
*  @author Erik Koekemoer; u19011866
*/
using namespace std;

/**
 * @brief Create BattleFacade:: Create BattleFacade object.
 */
BattleFacade::BattleFacade() {
}

/**
 * @brief Destroy BattleFacade:: BattleFacade object.
 */
BattleFacade::~BattleFacade() {
}

/**
 * @brief Get Memento Data:: Get the Memento data
 * @details Get Memento Data:: Gets the Memento data from the Battle class.
 */
void BattleFacade::getMementoData() {
  Battle* b = new Battle();
  this->battle_Proxy = b->copy(b);
}

/**
 * @brief Send Memento Data:: Send the Memento data
 * @details Send Memento Data:: Sends the Memento data to the BattleDatabase class.
 * @return Battle*
 */
Battle* BattleFacade::sendMementoData() {
  return this->battle_Proxy;
}