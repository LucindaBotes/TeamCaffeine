#include <ObserverPattern/Battle.h>
#include <string>

using namespace std;

Battle::Battle(std::string name) {
  this->name = name;
}

Battle::~Battle() {
}

int Battle::getMember() {
  return this->member;
}

void Battle::setMember(int member) {
  this->member = member;
}

void Battle::setPlayerCountries(Country * player1, Country * player2)
{
  this->Alliance_A.push_back(player1);
  this->Alliance_A.push_back(player2);
  for (int i=0; i < player1->getAllies().size(); i++)
  {
    this->Alliance_A.push_back(player1->getAllies()[i]);
  }
  for (int i=0; i < player2->getAllies().size(); i++)
  {
    this->Alliance_B.push_back(player2->getAllies()[i]);
  }
}

void Battle::start(Invoker * player1, Invoker * player2){
  if (player1->getNextAction() == 0)//If player1 Defends
  {
    if (player2->getNextAction() == 0){//Defends

    }
    else if (player2->getNextAction() == 1)//Holds
    {

    }
    else if (player2->getNextAction() == 2)//surrenders
    {

    }
    else if (player2->getNextAction() == 3)//requestAlly
    {

    }
    else if (player2->getNextAction() == 4)//attacks
    {

    }
  }
  else if (player1->getNextAction() == 1)//If player 1 Holds
  {
    if (player2->getNextAction() == 0){

    }
    else if (player2->getNextAction() == 1)
    {

    }
    else if (player2->getNextAction() == 2)
    {

    }
    else if (player2->getNextAction() == 3)
    {

    }
    else if (player2->getNextAction() == 4)
    {

    }
  }
  else if (player1->getNextAction() == 2)//If player 1 surrenders
  {
    if (player2->getNextAction() == 0){

    }
    else if (player2->getNextAction() == 1)
    {

    }
    else if (player2->getNextAction() == 2)
    {

    }
    else if (player2->getNextAction() == 3)
    {

    }
    else if (player2->getNextAction() == 4)
    {

    }
  }
  else if (player1->getNextAction() == 3)//If player 1 requestsAlly
  {
    if (player2->getNextAction() == 0){

    }
    else if (player2->getNextAction() == 1)
    {

    }
    else if (player2->getNextAction() == 2)
    {

    }
    else if (player2->getNextAction() == 3)
    {

    }
    else if (player2->getNextAction() == 4)
    {

    }
  }
  else if (player1->getNextAction() == 4)//If player 1 attacks
  {
    if (player2->getNextAction() == 0){

    }
    else if (player2->getNextAction() == 1)
    {

    }
    else if (player2->getNextAction() == 2)
    {

    }
    else if (player2->getNextAction() == 3)
    {

    }
    else if (player2->getNextAction() == 4)
    {

    }
  }
}

void Battle::defend(int playerNumber){//Uses Defense statistic
  if (playerNumber == 1)
  {
    
  }
  else if (playerNumber == 2)
  {

  }
}

void Battle::hold(int playerNumber){//Hold does nothing
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}

void Battle::surrender(int playerNumber){//Terminate war give up
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}

void Battle::allyAction(int playerNumber){//request ally
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}

void Battle::attack(int playerNumber){//Normal attack
  if (playerNumber == 1)
  {

  }
  else if (playerNumber == 2)
  {

  }
}