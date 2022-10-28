#include <TakeActions/Hold.h>

using namespace std;

Hold::Hold(Battle * battle) {
  this->battle = battle;
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

}


