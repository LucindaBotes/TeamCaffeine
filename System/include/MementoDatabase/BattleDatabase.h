#ifndef BATTLEDATABASE_H
#define BATTLEDATABASE_H
#include <MementoDatabase/Databases.h>
#include <../src/MementoDatabase/Databases.cpp>
#include <ObserverPattern/Battle.h>
#include <../src/ObserverPattern/Battle.cpp>
#include <vector>


template <class T>
class BattleDatabase: public Databases {
  private:
    vector<Battle> memento;

  public:
    BattleDatabase();
    ~BattleDatabase();
    Battle getMemento();
    void setMemento(Battle* b);
};

#endif
