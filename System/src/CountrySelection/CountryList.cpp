#include "CountryList.h"

using namespace std;

CountryList::CountryList() {
}

CountryList::~CountryList() {
}

int CountryList::getMember() {
  return this->member;
}

void CountryList::setMember(int member) {
  this->member = member;
}
