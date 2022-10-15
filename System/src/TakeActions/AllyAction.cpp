#include <TakeActions/AllyAction.h>

using namespace std;

AllyAction::AllyAction() {
}

AllyAction::~AllyAction() {
}

int AllyAction::getMember() {
  return this->member;
}

void AllyAction::setMember(int member) {
  this->member = member;
}
