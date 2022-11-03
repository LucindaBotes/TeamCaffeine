#include <TakeActions/Hold.h>

using namespace std;

Hold::Hold() {
}

Hold::~Hold() {
}

int Hold::getMember() {
  return this->member;
}

void Hold::setMember(int member) {
  this->member = member;
}
