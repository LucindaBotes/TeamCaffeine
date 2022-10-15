#include <MementoDatabase/Memento.h>

using namespace std;

Memento::Memento() {
}

Memento::~Memento() {
}

int Memento::getMember() {
  return this->member;
}

void Memento::setMember(int member) {
  this->member = member;
}
