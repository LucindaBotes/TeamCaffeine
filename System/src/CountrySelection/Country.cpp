#include <CountrySelection/Country.h>

using namespace std;

Country::Country() {
}

Country::~Country() {
}

int Country::getMember() {
  return this->member;
}

void Country::setMember(int member) {
  this->member = member;
}
