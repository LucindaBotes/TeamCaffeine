#include <ModeSelection/Design.h>

using namespace std;

Design::Design() {
}

Design::~Design() {
}

int Design::getMember() {
  return this->member;
}

void Design::setMember(int member) {
  this->member = member;
}
