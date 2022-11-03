#include <MementoDatabase/WarDatabase.h>

using namespace std;

WarDatabase::WarDatabase() {
}

WarDatabase::~WarDatabase() {
}

int WarDatabase::getMember() {
  return this->member;
}

void WarDatabase::setMember(int member) {
  this->member = member;
}
