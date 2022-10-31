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

void Battle::start(Invoker * player1, Invoker * player2){
  if (player1->getNextAction() == 0)
  {
    player1->defendAlliance();
  }
  else if (player1->getNextAction() == 1)
  {
    player1->hold();
  }
  else if (player1->getNextAction() == 2)
  {
    player1->retreat();
  }
  else if (player1->getNextAction() == 3)
  {
    player1->surrender();
  }
  else if (player1->getNextAction() == 4)
  {
    player1->requestAlly();
  }
  else if (player1->getNextAction() == 5)
  {
    player1->attackEnemyAlliance();
  }

  if (player2->getNextAction() == 0)
  {
    player2->defendAlliance();
  }
  else if (player2->getNextAction() == 1)
  {
    player2->hold();
  }
  else if (player2->getNextAction() == 2)
  {
    player2->retreat();
  }
  else if (player2->getNextAction() == 3)
  {
    player2->surrender();
  }
  else if (player2->getNextAction() == 4)
  {
    player2->requestAlly();
  }
  else if (player2->getNextAction() == 5)
  {
    player2->attackEnemyAlliance();
  }

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