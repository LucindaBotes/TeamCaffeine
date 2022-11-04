#include "BattleDatabase.h"

using namespace std;

BattleDatabase::BattleDatabase() {
}

BattleDatabase::~BattleDatabase() {
}

int BattleDatabase::getMember() {
  return this->member;
}

void BattleDatabase::setMember(int member) {
  this->member = member;
}
