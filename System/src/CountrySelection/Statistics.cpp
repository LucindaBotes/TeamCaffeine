#include <CountrySelection/Statistics.h>

using namespace std;

Statistics::Statistics() {
}

Statistics::~Statistics() {
}

int Statistics::getMember() {
  return this->member;
}

void Statistics::setMember(int member) {
  this->member = member;
}
