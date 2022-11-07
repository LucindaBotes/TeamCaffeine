#include "MementoDatabase/BattleFacade.h"
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

template <class T>
BattleFacade<T>::BattleFacade() {
}

template <class T>
BattleFacade<T>::~BattleFacade() {
}

template <class T>
void BattleFacade<T>::getMementoData() {
  Battle* b = new Battle();
  this->battle_Proxy = b->copy(b);
}

template <class T>
Battle* BattleFacade<T>::sendMementoData() {
  return this->battle_Proxy;
}