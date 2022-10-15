#include <UserInterface/Interface.h>

using namespace std;

Interface::Interface() {
}

Interface::~Interface() {
}

int Interface::getMember() {
  return this->member;
}

void Interface::setMember(int member) {
  this->member = member;
}
