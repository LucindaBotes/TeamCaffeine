#include <WarTheatre/Land.h>

using namespace std;

Land::Land() {
}

Land::~Land() {
}

int Land::getMember() {
  return this->member;
}

void Land::setMember(int member) {
  this->member = member;
}
