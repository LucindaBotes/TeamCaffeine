#include <MementoDatabase/BattleFacade.h>
//Battle class is Originator
//This is the Proxy
//Die vraag is: wat is die doel van die klas noudat ons net een Memento het? lol
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