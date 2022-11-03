#include <Inventory/Iterator.h>

using namespace std;

Iterator::Iterator() {
}

Iterator::~Iterator() {
}

int Iterator::getMember() {
  return this->member;
}

void Iterator::setMember(int member) {
  this->member = member;
}
