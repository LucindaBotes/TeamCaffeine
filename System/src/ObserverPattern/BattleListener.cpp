#include <ObserverPattern/BattleListener.h>

using namespace std;

BattleListener::BattleListener() {
}

BattleListener::~BattleListener() {
}

int BattleListener::getMember() {
  return this->member;
}

void BattleListener::setMember(int member) {
  this->member = member;
}
