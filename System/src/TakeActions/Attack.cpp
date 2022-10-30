#include <TakeActions/Attack.h>

using namespace std;

Attack::Attack(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

Attack::~Attack() {
}

int Attack::getMember() {
  return this->member;
}

void Attack::setMember(int member) {
  this->member = member;
}

void Attack::executeAction()
{
  this->battle->attack(this->playerNumber);
}
