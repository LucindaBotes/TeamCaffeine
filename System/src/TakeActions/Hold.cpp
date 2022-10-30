#include <TakeActions/Hold.h>

using namespace std;

Hold::Hold(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

Hold::~Hold() {
}

int Hold::getMember() {
  return this->member;
}

void Hold::setMember(int member) {
  this->member = member;
}

void Hold::executeAction()
{
  this->battle->hold(this->playerNumber);
}


