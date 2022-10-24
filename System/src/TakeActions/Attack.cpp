#include <TakeActions/Attack.h>

using namespace std;

Attack::Attack(Battle * battle) {
  this->battle = battle;
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

}

void Attack::unexecuteAction()
{
  
}
