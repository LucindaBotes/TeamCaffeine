#ifndef BATTLEDATABASE_H
#define BATTLEDATABASE_H
#include "Battle.h"
#include "BattleMemento.h"
#include "BattleFacade.h"
#include <vector>
//Caretaker class
class BattleDatabase {
  private:
    Battle * battle_Caretaker;

  public:
    BattleDatabase();
    void getMemento();
    Battle* setMemento();
};

#endif
