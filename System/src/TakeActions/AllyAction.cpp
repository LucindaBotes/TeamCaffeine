#include "AllyAction.h"

using namespace std;

AllyAction::AllyAction(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

AllyAction::~AllyAction() {
}

int AllyAction::getMember() {
  return this->member;
}

void AllyAction::setMember(int member) {
  this->member = member;
}

void AllyAction::executeAction()
{
  this->battle->allyAction(this->playerNumber);
}
