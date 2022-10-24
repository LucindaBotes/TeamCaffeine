#include <TakeActions/Surrender.h>

using namespace std;

Surrender::Surrender(Battle * battle) {
  this->battle = battle;
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

}

void Surrender::unexecuteAction()
{
  
}
