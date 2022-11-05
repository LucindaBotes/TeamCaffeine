#include "Defend.h"

using namespace std;

Defend::Defend(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

Defend::~Defend() {
}

int Defend::getMember() {
  return this->member;
}

void Defend::setMember(int member) {
  this->member = member;
}

void Defend::executeAction()
{
  this->battle->defend(this->playerNumber);
}
