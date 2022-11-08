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

<<<<<<< Updated upstream
int BattleFacade::getMember() {
  return this->member;
}

Battle* BattleFacade::sendMementoData() {
  
}
=======
void BattleFacade::getMementoData() {
  
}

Battle* BattleFacade::sendMementoData() {
  
}
>>>>>>> Stashed changes
