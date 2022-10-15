#include <ObserverPattern/ActionListener.h>

using namespace std;

ActionListener::ActionListener() {
}

ActionListener::~ActionListener() {
}

int ActionListener::getMember() {
  return this->member;
}

void ActionListener::setMember(int member) {
  this->member = member;
}
