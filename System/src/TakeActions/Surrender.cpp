#include "Surrender.h"

using namespace std;

Surrender::Surrender(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

Surrender::~Surrender() {
}

int Surrender::getMember() {
  return this->member;
}

void Surrender::setMember(int member) {
  this->member = member;
}

void Surrender::executeAction()
{
  this->battle->surrender(this->playerNumber);
}