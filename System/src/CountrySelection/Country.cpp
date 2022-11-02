#include <CountrySelection/Country.h>
#include <vector>

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

std::vector<Country*> Country::getAllies()
{
  return this->_allies;
}