#include "Strategy.h"

using namespace std;

Strategy::Strategy() {
}

Strategy::~Strategy() {
}

int Strategy::getMember() {
  return this->member;
}

void Strategy::setMember(int member) {
  this->member = member;
}
