#include <ObserverPattern/Battle.h>

using namespace std;

Battle::Battle() {
}

Battle::~Battle() {
}

int Battle::getMember() {
  return this->member;
}

void Battle::setMember(int member) {
  this->member = member;
}

void Battle::start(){

}

void Battle::defend(int playerNumber){
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}

void Battle::hold(int playerNumber){
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}

void Battle::retreat(int playerNumber){
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}

void Battle::surrender(int playerNumber){
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}

void Battle::allyAction(int playerNumber){
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}

void Battle::attack(int playerNumber){
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}