#include "Observable.h"

using namespace std;

Observable::Observable()
{

}

Observable::~Observable()
{
    
}

int Observable::getMember() {
  return this->member;
}

void Observable::setMember(int member) {
  this->member = member;
}

