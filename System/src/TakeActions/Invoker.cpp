#include <TakeActions/Invoker.h>

using namespace std;

Invoker::Invoker() {
}

Invoker::~Invoker() {
}

int Invoker::getMember() {
  return this->member;
}

void Invoker::setMember(int member) {
  this->member = member;
}
