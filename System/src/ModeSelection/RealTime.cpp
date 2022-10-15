#include <ModeSelection/RealTime.h>

using namespace std;

RealTime::RealTime() {
}

RealTime::~RealTime() {
}

int RealTime::getMember() {
  return this->member;
}

void RealTime::setMember(int member) {
  this->member = member;
}
