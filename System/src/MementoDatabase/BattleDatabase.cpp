#include <MementoDatabase/BattleDatabase.h>

using namespace std;

BattleDatabase::BattleDatabase() {
}

<<<<<<< Updated upstream
BattleDatabase::~BattleDatabase() {
=======
void BattleDatabase::getMemento() {
  Battle* b = new Battle();
  this->battle_Caretaker = b->copy(b);
>>>>>>> Stashed changes
}

int BattleDatabase::getMember() {
  return this->member;
}

void BattleDatabase::setMember(int member) {
  this->member = member;
}
