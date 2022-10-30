#include <TakeActions/Retreat.h>

using namespace std;

Retreat::Retreat(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

Retreat::~Retreat() {
}

int Retreat::getMember() {
  return this->member;
}

void Retreat::setMember(int member) {
  this->member = member;
}

void Retreat::executeAction()
{
  this->battle->retreat(this->playerNumber);
}
