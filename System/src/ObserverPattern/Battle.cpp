#include <ObserverPattern/Battle.h>
#include <ObserverPattern/Randomizer.h>
#include <iostream>
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
    cout<<"Player 1 defends..."<<endl;
  }
}

void Battle::hold(int playerNumber){//Hold does nothing
  if (playerNumber == 1)
  {
    cout<<"Player 1 Holds..."<<endl;
  }
  else if (playerNumber == 2)
  {
    cout<<"Player 1 Holds..."<<endl;
  }
}

void Battle::surrender(int playerNumber){//Terminate war give up
  if (playerNumber == 1)
  {
    cout<<"Player 1 has Surrendered!"<<endl;
  }
  else if (playerNumber == 2)
  {
    cout<<"Player 2 has Surrendered!"<<endl;
  }
}

void Battle::allyAction(int playerNumber){//request ally
  if (this->war->Countries_Eligible_for_War.empty() == true)
  {
    cout<<"Sorry, no allies available."<<endl;
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

void Battle::displayEligibleCountries()
{
  for (int i=0; i < this->war->Countries_Eligible_for_War.size(); i++)
  {
    cout<<"Country "<<i+1<<": "<<this->war->Countries_Eligible_for_War[i]->getName()<<"."<<endl;
  }
}