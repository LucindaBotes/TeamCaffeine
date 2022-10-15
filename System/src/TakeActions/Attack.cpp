#include <TakeActions/Attack.h>

using namespace std;

Attack::Attack() {
}

Attack::~Attack() {
}

int Attack::getMember() {
  return this->member;
}

void Attack::setMember(int member) {
  this->member = member;
}
