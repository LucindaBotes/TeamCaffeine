#ifndef BATTLEDATABASE_H
#define BATTLEDATABASE_H
#include <ObserverPattern/Battle.h>
#include <../src/ObserverPattern/Battle.cpp>
#include <BattleMemento.h>
#include <BattleFacade.h>
#include <vector>
//Caretaker class
template <class T>
class BattleDatabase {
  private:
    Battle * battle_Caretaker;

  public:
    BattleDatabase();
    void getMemento();
    Battle* setMemento();
};

#endif
