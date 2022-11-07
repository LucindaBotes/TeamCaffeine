#include "ObserverPattern/Battle.h"
#include "ObserverPattern/Randomizer.h"
#include <iostream>
#include <string>

using namespace std;

/**
 * @file Battle.h
 * @brief Battle class implementation where the battle is simulated between the players.
 * @details Battle is where both players will execute various commands on each other's alliances aiming to win the battle by either
 * defeating the other player's alliance or by either one surrendering.
 * 
 * @author Ruan Tristan Carlinsky ; u20416823
 */

/**
 * @brief Constructor to create a new Battle object and initialize the name Battle
 */

Battle::Battle() {
  this->name = "Battle #" + to_string(this->member);
  cout<<this->name<<" has begun!"<<endl;
}

/**
 * @brief Destructor to destroy the Battle object and clearing the Alliance vectors.
 */
Battle::~Battle() {
  this->Alliance_A.clear();
  this->Alliance_B.clear();
}

/*Added by Erik*/
/**
 * @brief Copy constructor to create a new Battle object and initialize the name Battle
 * @param b Battle object to be copied
 */
Battle* Battle::copy(Battle* b) {
  Battle* battle = new Battle();
  battle->name = b->name;
  battle->member = b->member;
  battle->Alliance_A = allianceDeepCopy(b->Alliance_A);
  battle->Alliance_B = allianceDeepCopy(b->Alliance_B);
  return battle;
}

/**
 * @brief Copy constructor to create a new Alliance vector and copy all the elements from the original vector
 * @param alliance Vector to be copied
 */
std::vector<Country*> Battle::allianceDeepCopy(std::vector<Country*> alliance) {
  std::vector<Country*> newAlliance;
  for (int i=0; i<alliance.size(); i++) {
    newAlliance.push_back(alliance[i]->copy(alliance[i]));
  }
  return newAlliance;
}
/*Added by Erik*/

/**
 * @brief method to get the name private member of the Battle object
 * 
 * @return string 
 */

int Battle::getMember() {
  return this->member;
}

/**
 * @brief method to set the member private member of the Battle object
 * 
 * @param member int
 */

void Battle::setMember(int member) {
  this->member = member;
}

/**
 * @brief Method to initialize the vectors for player 1 and 2's alliance by taking the two player's countries
 * as arguments.
 * 
 * @param player1 Country*
 * @param player2 Country*
 */

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

/**
 * @brief Commences the war by executing the actions that both player's chose upon each other's alliances. 
 * Checks are the performed to determine if one of the alliances have lost an ally. If so, the ally is removed from the
 * Alliance.
 * 
 * @param player1 Invoker*
 * @param player2 INvoker*
 */
void Battle::start(Invoker * player1, Invoker * player2){//start should have IF in main to check if a player will surrender. If so call start then BREAK loop.
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

/**
 * @brief Executes the defend method for the relevant player.
 * @details Takes in the player number to execute the defend method for the player that invoked the defend action.
 * The player's alliance is then reinforced with defense using the defense statistics for each country in the alliance.
 * The player will then have defense for the round of battle.
 * @param playerNumber int
 */
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

/**
 * @brief Executes the hold method for the relevant player.
 * @details Takes in the player number to execute the hold method for the player that invoked the hold action.
 * The player will then hold for the round of battle.
 * @param playerNumber int
 */
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

/**
 * @brief Executes the surrender method for the relevant player.
 * @details Takes in the player number to execute the surrender method for the player that invoked the surrender action.
 * The player will then surrender for the round of battle.
 * @param playerNumber int
 */

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

/**
 * @brief Executes the allyAction method for the relevant player.
 * @details Takes in the player number to execute the requestAlly method for the player that invoked the requestAlly action.
 * The player will then request an ally for the round of battle.
 * The player will first be presented with a list of the possible candidate countries of which the player will have to choose one.
 * The request will then be considered by getting a random boolean and can either be rejected(false) or accepted(true). 
 * If accepted then the ally will become a part of the alliance, otherwise it won't.
 * @param playerNumber int
 */
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

/**
 * @brief Executes the attack action to inflict damage on enemy alliance.
 * @details Takes in the player number to execute the attack method for the player that invoked the action.
 * The player's total damage is then calculated from its alliance members and the total damage is then distributed
 * equally on the enemy alliance members by subtracting the damage from their Health statistic.
 * @param playerNumber int
 */
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

/**
 * @brief Calculates the total Damage an alliance can inflict on the enemy alliance and returns the total.
 * 
 * @param playerNumber 
 * @return double 
 */
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
  else if (playerNumber == 2)
  {
    for (int i=0; i < this->Alliance_B.size(); i++)
    {
      totalDamage += this->Alliance_B[i]->getStats().getDamage();
    }
  }
  return totalDamage;
}

/**
 * @brief Calculates the total Health of an alliance and returns the total.
 * 
 * @param playerNumber 
 * @return double 
 */
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

/**
 * @brief Displays the list of countries that are eligible for war.
 * 
 */
void Battle::displayEligibleCountries()
{
  for (int i=0; i < this->war->Countries_Eligible_for_War.size(); i++)
  {
    cout<<"Country "<<i+1<<": "<<this->war->Countries_Eligible_for_War[i]->getName()<<"."<<endl;
  }
}

/**
 * @brief Checks if an ally member has died and removes it from the player's alliance.
 * 
 * @param playerNumber 
 */
void Battle::checkifAllyDied(int playerNumber)
{
  if (playerNumber == 1)
  {
    for (int i=1; i < this->Alliance_A.size(); i++)
    {
      if (this->Alliance_A[i]->getStats().getHealth() <= 0)
      {
        cout<<"Player 1's ally "<<this->Alliance_A[i]->getName()<<" has died!"<<endl;
        delete this->Alliance_A[i];
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
        cout<<"Player 2's ally "<<this->Alliance_B[i]->getName()<<" has died!"<<endl;
        delete this->Alliance_B[i];
        this->Alliance_B.erase(this->Alliance_B.begin() + i);
      }
    }
  }
}

