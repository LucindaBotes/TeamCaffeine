#include <WarTheatre/Sea.h>

using namespace std;

Sea::Sea() {
}

Sea::~Sea() {
}

int Sea::getMember() {
  return this->member;
}

void Sea::setMember(int member) {
  this->member = member;
}
