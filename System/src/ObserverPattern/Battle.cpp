#include <ObserverPattern/Battle.h>
#include <ObserverPattern/Randomizer.h>
#include <iostream>
#include <string>

using namespace std;

Battle::Battle() {
  this->name = "Battle #" + to_string(this->member);
  cout<<this->name<<" has begun!"<<endl;
}

Battle::~Battle() {
}

int Battle::getMember() {
  return this->member;
}

void Battle::setMember(int member) {
  this->member = member;
}

void Battle::setPlayerAllies(Country * player1, Country * player2)
{
  this->Alliance_A.push_back(player1);
  this->Alliance_B.push_back(player2);
  for (int i=0; i < player1->getAllies().size(); i++)
  {
    this->Alliance_A.push_back(player1->getAllies()[i]);
  }
  for (int i=0; i < player2->getAllies().size(); i++)
  {
    this->Alliance_B.push_back(player2->getAllies()[i]);
  }
}

//start should have IF in main to check if a player will surrender. If so call start then BREAK loop.
void Battle::start(Invoker * player1, Invoker * player2){
  if (player1->getNextAction() == 0)//If player1 Defends
  {
    if (player2->getNextAction() == 0){//Defends
      player1->defendAlliance();
      player2->defendAlliance();
    }
    else if (player2->getNextAction() == 1)//Holds
    {
      player1->defendAlliance();
      player2->hold();
    }
    else if (player2->getNextAction() == 2)//surrenders
    {
      player1->defendAlliance();
      player2->surrender();
    }
    else if (player2->getNextAction() == 3)//requestAlly
    {
      player1->defendAlliance();
      player2->requestAlly();
    }
    else if (player2->getNextAction() == 4)//attacks
    {
      player1->defendAlliance();
      player2->attackEnemyAlliance();
    }
  }
  else if (player1->getNextAction() == 1)//If player 1 Holds
  {
    if (player2->getNextAction() == 0){
      player1->hold();
      player2->defendAlliance();
    }
    else if (player2->getNextAction() == 1)
    {
      player1->hold();
      player2->hold();
    }
    else if (player2->getNextAction() == 2)
    {
      player1->hold();
      player2->surrender();
    }
    else if (player2->getNextAction() == 3)
    {
      player1->hold();
      player2->requestAlly();
    }
    else if (player2->getNextAction() == 4)
    {
      player1->hold();
      player2->attackEnemyAlliance();
    }
  }
  else if (player1->getNextAction() == 2)//If player 1 surrenders
  {
    if (player2->getNextAction() == 0){
      player1->surrender();
    }
    else if (player2->getNextAction() == 1)
    {
      player1->surrender();
    }
    else if (player2->getNextAction() == 2)
    {
      player1->surrender();
    }
    else if (player2->getNextAction() == 3)
    {
      player1->surrender();
    }
    else if (player2->getNextAction() == 4)
    {
      player1->surrender();
    }
  }
  else if (player1->getNextAction() == 3)//If player 1 requestsAlly
  {
    if (player2->getNextAction() == 0){
      player1->requestAlly();
      player2->defendAlliance();
    }
    else if (player2->getNextAction() == 1)
    {
      player1->requestAlly();
      player2->hold();
    }
    else if (player2->getNextAction() == 2)
    {
      player1->requestAlly();
      player2->surrender();
    }
    else if (player2->getNextAction() == 3)
    {
      player1->requestAlly();
      player2->requestAlly();
    }
    else if (player2->getNextAction() == 4)
    {
      player1->requestAlly();
      player2->attackEnemyAlliance();
    }
  }
  else if (player1->getNextAction() == 4)//If player 1 attacks
  {
    if (player2->getNextAction() == 0){
      player1->attackEnemyAlliance();
      player2->defendAlliance();
    }
    else if (player2->getNextAction() == 1)
    {
      player1->attackEnemyAlliance();
      player2->hold();
    }
    else if (player2->getNextAction() == 2)
    {
      player1->attackEnemyAlliance();
      player2->surrender();
    }
    else if (player2->getNextAction() == 3)
    {
      player2->requestAlly();
      player1->attackEnemyAlliance();
    }
    else if (player2->getNextAction() == 4)
    {
      player1->attackEnemyAlliance();
      player2->attackEnemyAlliance();
    }
  }
  //Use the health of the player Countries to determine if war should continue in main WHILE LOOP.
  //If Player Country dies then that player loses.
  this->checkifAllyDied(1);
  this->checkifAllyDied(2);
  cout<<"Battle #"<<this->getMember()<<" has ended."<<endl;
}

void Battle::defend(int playerNumber){//Uses Defense statistic
  if (playerNumber == 1)
  {
    for (int i =0; i < this->Alliance_A.size(); i++)
    {
      if (this->Alliance_A[i]->getStats().getDefence() >= 20)
      {
        this->Alliance_A[i]->getStats().setHealth(this->Alliance_A[i]->getStats().getHealth() + 20);
      }
    }
    cout<<"Player 1 defends..."<<endl;
  }
  else if (playerNumber == 2)
  {
    for (int i =0; i < this->Alliance_B.size(); i++)
    {
      if (this->Alliance_B[i]->getStats().getDefence() >= 20)
      {
        this->Alliance_B[i]->getStats().setHealth(this->Alliance_B[i]->getStats().getHealth() + 20);
      }
    }
    cout<<"Player 2 defends..."<<endl;
  }
}

void Battle::hold(int playerNumber){//Hold does nothing
  if (playerNumber == 1)
  {
    cout<<"Player 1 Holds..."<<endl;
  }
  else if (playerNumber == 2)
  {
    cout<<"Player 2 Holds..."<<endl;
  }
}

void Battle::surrender(int playerNumber){//Terminate war give up WILL BE HANDLE IN MAIN IF STATEMENT.
  if (playerNumber == 1)
  {
    cout<<"Player 1 has Surrendered!"<<endl;
    cout<<this->Alliance_B[0]->getName()<<" has won the war!"<<endl;
    cout<<"*****************************************"<<endl;
    cout<<"Player 2 WINS."<<endl;
  }
  else if (playerNumber == 2)
  {
    cout<<"Player 2 has Surrendered!"<<endl;
    cout<<this->Alliance_A[0]->getName()<<" has won the war!"<<endl;
    cout<<"*****************************************"<<endl;
    cout<<"Player 1 WINS."<<endl;
  }
}

void Battle::allyAction(int playerNumber){//request ally
  if (this->war->Countries_Eligible_for_War.empty() == true)
  {
    cout<<"Sorry, no allies available."<<endl;
    return;
  }
  cout<<"Select the number for the country you wish to be your Ally!"<<endl;
  cout<<"**********************************************"<<endl;
  this->displayEligibleCountries();
  int countryNUmber = 0;
  if (playerNumber == 1)
  {
    cin>>countryNUmber;
    countryNUmber = countryNUmber-1;
    Randomizer random = Randomizer();
    bool accept = random.getRandomBoolean();
    if (accept == true)
    {
      cout<<this->war->Countries_Eligible_for_War[countryNUmber]->getName()<<" has ACCEPTED your request and is now your Ally!"<<endl;
      this->war->getPlayer1_Country()->addAlly(this->war->Countries_Eligible_for_War[countryNUmber]);
      this->war->Countries_Eligible_for_War.erase(this->war->Countries_Eligible_for_War.begin() + countryNUmber);
    }
    else
    {
      cout<<this->war->Countries_Eligible_for_War[countryNUmber]->getName()<<" has REJECTED your request!"<<endl;
    }
  }
  else if (playerNumber == 2)
  {
    cin>>countryNUmber;
    countryNUmber = countryNUmber-1;
    Randomizer random = Randomizer();
    bool accept = random.getRandomBoolean();
    if (accept == true)
    {
      cout<<this->war->Countries_Eligible_for_War[countryNUmber]->getName()<<" has ACCEPTED your request and is now your Ally!"<<endl;
      this->war->getPlayer2_Country()->addAlly(this->war->Countries_Eligible_for_War[countryNUmber]);
      this->war->Countries_Eligible_for_War.erase(this->war->Countries_Eligible_for_War.begin() + countryNUmber);
    }
    else
    {
      cout<<this->war->Countries_Eligible_for_War[countryNUmber]->getName()<<" has REJECTED your request!"<<endl;
    }
  }
}

void Battle::attack(int playerNumber){//Normal attack
  if (playerNumber == 1)
  {
    double Atotal = this->calculateDamage(1);
    double dividentDamage = Atotal/this->Alliance_B.size();
    
    for (int i =0; i < this->Alliance_B.size(); i++)
    {
      this->Alliance_B[i]->getStats().setHealth(this->Alliance_B[i]->getStats().getHealth() - dividentDamage);
    }
    cout<<"Player 1 attacked Player 2"<<endl;
  }
  else if (playerNumber == 2)
  {
    double Atotal = this->calculateDamage(2);
    double dividentDamage = Atotal/this->Alliance_A.size();
    
    for (int i =0; i < this->Alliance_A.size(); i++)
    {
      this->Alliance_A[i]->getStats().setHealth(this->Alliance_A[i]->getStats().getHealth() - dividentDamage);
    }
    cout<<"Player 2 attacked Player 1"<<endl;
  }
}

double Battle::calculateDamage(int playerNumber)
{
  double totalDamage = 0;
  if (playerNumber == 1)
  {
    for (int i=0; i < this->Alliance_A.size(); i++)
    {
      totalDamage += this->Alliance_A[i]->getStats().getDamage();
    }
  }
  else
  {
    for (int i=0; i < this->Alliance_B.size(); i++)
    {
      totalDamage += this->Alliance_B[i]->getStats().getDamage();
    }
  }
  return totalDamage;
}

double Battle::calculateHealth(int playerNumber)
{
  double totalHealth = 0;
  if (playerNumber == 1)
  {
    for (int i=0; i < this->Alliance_A.size(); i++)
    {
      totalHealth += this->Alliance_A[i]->getStats().getHealth();
    }
  }
  else
  {
    for (int i=0; i < this->Alliance_B.size(); i++)
    {
      totalHealth += this->Alliance_B[i]->getStats().getHealth();
    }
  }
  return totalHealth;
}

void Battle::displayEligibleCountries()
{
  for (int i=0; i < this->war->Countries_Eligible_for_War.size(); i++)
  {
    cout<<"Country "<<i+1<<": "<<this->war->Countries_Eligible_for_War[i]->getName()<<"."<<endl;
  }
}

void Battle::checkifAllyDied(int playerNumber)
{
  if (playerNumber == 1)
  {
    for (int i=1; i < this->Alliance_A.size(); i++)
    {
      if (this->Alliance_A[i]->getStats().getHealth() <= 0)
      {
        cout<<this->Alliance_A[i]->getName()<<" has died!"<<endl;
        this->Alliance_A.erase(this->Alliance_A.begin() + i);
      }
    }
  }
  else if (playerNumber == 2)
  {
    for (int i=1; i < this->Alliance_B.size(); i++)
    {
      if (this->Alliance_B[i]->getStats().getHealth() <= 0)
      {
        cout<<this->Alliance_B[i]->getName()<<" has died!"<<endl;
        this->Alliance_B.erase(this->Alliance_B.begin() + i);
      }
    }
  }
}