#include "BattleFacade.h"

using namespace std;

BattleFacade::BattleFacade() {
}

BattleFacade::~BattleFacade() {
}

int BattleFacade::getMember() {
  return this->member;
}

void BattleFacade::setMember(int member) {
  this->member = member;
}
