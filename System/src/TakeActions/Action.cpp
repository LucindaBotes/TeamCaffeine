#include <TakeActions/Action.h>

using namespace std;

Action::Action() {
}

Action::~Action() {
}

int Action::getMember() {
  return this->member;
}

void Action::setMember(int member) {
  this->member = member;
}