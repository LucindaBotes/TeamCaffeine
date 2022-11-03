#include <Inventory/CreateArmour.h>

using namespace std;

CreateArmour::CreateArmour() {
}

CreateArmour::~CreateArmour() {
}

int CreateArmour::getMember() {
  return this->member;
}

void CreateArmour::setMember(int member) {
  this->member = member;
}
