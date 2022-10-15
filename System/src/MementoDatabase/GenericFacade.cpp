#include <MementoDatabase/GenericFacade.h>

using namespace std;

GenericFacade::GenericFacade() {
}

GenericFacade::~GenericFacade() {
}

int GenericFacade::getMember() {
  return this->member;
}

void GenericFacade::setMember(int member) {
  this->member = member;
}
