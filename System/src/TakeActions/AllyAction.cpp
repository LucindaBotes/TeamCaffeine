#include <TakeActions/AllyAction.h>

using namespace std;

AllyAction::AllyAction(Battle * battle) {
  this->battle = battle;
}

AllyAction::~AllyAction() {
}

int AllyAction::getMember() {
  return this->member;
}

void AllyAction::setMember(int member) {
  this->member = member;
}

void AllyAction::executeAction()
{

}
