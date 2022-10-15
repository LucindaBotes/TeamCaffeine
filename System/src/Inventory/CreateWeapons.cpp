#include <Inventory/CreateWeapons.h>

using namespace std;

CreateWeapons::CreateWeapons() {
}

CreateWeapons::~CreateWeapons() {
}

int CreateWeapons::getMember() {
  return this->member;
}

void CreateWeapons::setMember(int member) {
  this->member = member;
}
