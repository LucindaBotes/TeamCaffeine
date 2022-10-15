#include <ObserverPattern/Battle.h>

using namespace std;

Battle::Battle() {
}

Battle::~Battle() {
}

int Battle::getMember() {
  return this->member;
}

void Battle::setMember(int member) {
  this->member = member;
}
