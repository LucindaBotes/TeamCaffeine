#include <UserInterface/War.h>

using namespace std;

War::War() {
}

War::~War() {
}

int War::getMember() {
  return this->member;
}

void War::setMember(int member) {
  this->member = member;
}
