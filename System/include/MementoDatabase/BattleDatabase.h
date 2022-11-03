#ifndef BATTLEDATABASE_H
#define BATTLEDATABASE_H
#include <ObserverPattern/Battle.h>
#include <../src/ObserverPattern/Battle.cpp>
#include <BattleMemento.h>
#include <vector>
//Caretaker class
template <class T>
class BattleDatabase {
  private:
    vector<Battle> battle_memento;

  public:
    BattleDatabase();
    Battle getMemento();
    void setMemento(Battle* b);
};

#endif
