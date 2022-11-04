#include "BattleMemento.h"

using namespace std;

BattleMemento::BattleMemento() {
}

BattleMemento::~BattleMemento() {
}

int BattleMemento::getMember() {
  return this->member;
}

void BattleMemento::setMember(int member) {
  this->member = member;
}
