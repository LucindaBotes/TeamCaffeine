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

BattleFacade::BattleFacade() {
}

BattleFacade::~BattleFacade() {
}

void BattleFacade::getMementoData() {
  Battle* b = new Battle();
  this->battle_Proxy = b->copy(b);
}

Battle* BattleFacade::sendMementoData() {
  return this->battle_Proxy;
}