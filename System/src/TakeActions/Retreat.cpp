#include <TakeActions/Retreat.h>

using namespace std;

Retreat::Retreat(Battle * battle) {
  this->battle = battle;
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
  this->battle->retreat();
}
