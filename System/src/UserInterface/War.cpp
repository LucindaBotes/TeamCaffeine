#include "War.h"
// #include "War.h"

/**
 * @file War.h
 * @brief War class implementation,
 
 * @details War simulates the war between two players by creating a war with the desired type of war with a
 * series of battles until a player wins.
 * @author Netshifhefhe Unarine Leo ; u20505656, Ruan Tristan Carlinsky ; u20416823
*/

using namespace std;

/**
 * @brief Construct a new War object
 * 
 */
War::War() {
}

/**
 * @brief Destroy the War object then delete the players and all the battles.
 * 
 */
War::~War() {
  delete this->Player_1;
  delete this->Player_2;
  for (int i =0; i < this->battles.size(); i++)
  {
    delete this->battles[i];
  }
  this->battles.clear();
}

void War::setPlayer1()
{
  this->Player_1 = new Invoker(1);
  this->Player_1->setBattleActions(this->battles[this->battles.size()]);
}

/**
 * @brief Method to create player 2's Invoker to serve as controller to invoke command actions.
 * Then sets the player's battle private member which the commands will be invoked on.
 * 
 * @return Player* 
 */

void War::setPlayer2()
{
  this->Player_2 = new Invoker(2);
  this->Player_2->setBattleActions(this->battles[this->battles.size()]);
}

/**
 * @brief Method to get player1's Invoker
 * 
 * @return Invoker* 
 */
Invoker * War::getPlayer1()
{
  return this->Player_1;
}

/**
 * @brief method to get player1's Invoker
 * 
 * @return Invoker* 
 */

Invoker * War::getPlayer2()
{
  return this->Player_2;
}

/**
 * @brief Method to create a new battle and add it to the battles vector private member.
 * 
 * @param battle battle*
 */

void War::addBattle(Battle * battle)
{
  this->battles.push_back(battle);
}

/**
 * @brief Method to select the player1's chosen country as an argument and set it as the player1's main country during the war.
 * @details Takes in the country name that the first user chose to be player1's main country.
 * The country is then selected from the list of eligible countries and set as the player1's main country and removed from the list.
 * @param countryname1 
 */

void War::setPlayer1_Country(std::string countryname1)
{
  for (int i=0; i < this->Countries_Eligible_for_War.size(); i++)
  {
    if (this->Countries_Eligible_for_War[i]->getName() == countryname1)
    {
      this->country_1 = this->Countries_Eligible_for_War[i];
      this->Countries_Eligible_for_War.erase(this->Countries_Eligible_for_War.begin() + i);
      break;
    }
  }
}

/**
 * @brief Method to select the player2's chosen country as an argument and set it as the player2's main country during the war.
 * @details Takes in the country name that the first user chose to be player2's main country.
 * The country is then selected from the list of eligible countries and set as the player2's main country and removed from the list.
 * @param countryname1 
 */

void War::setPlayer2_Country(std::string countryname2)
{
  for (int i=0; i < this->Countries_Eligible_for_War.size(); i++)
  {
    if (this->Countries_Eligible_for_War[i]->getName() == countryname2)
    {
      this->country_2 = this->Countries_Eligible_for_War[i];
      this->Countries_Eligible_for_War.erase(this->Countries_Eligible_for_War.begin() + i);
      break;
    }
  }
}

/**
 * @brief Method to get the player1's main country
 * 
 * @return Country* 
 */

Country * War::getPlayer1_Country()
{
  return this->country_1;
}

/**
 * @brief Method to get the player2's main country
 * 
 * @return Country* 
 */

Country * War::getPlayer2_Country()
{
  return this->country_2;
}

/**
 * @brief Method to initialize all the eligible countries for war.
 * 
 */
void War::initializeCountries()
{
  std::string country_names[] = {"France", "USA", "Turkey", "Canada", "England", "Russia", "Poland", "South Africa", "Egypt", "Germany"};
  for (int i =0; i < 10; i ++)
  {
    this->Countries_Eligible_for_War.push_back(new Country(country_names[i]));
  }
}

/// @brief check if the war is still active or not
/// @return activeness of war, true if active and false if not active
bool War::isActive()
{
    if(_active == true)
    {
      return true;
    }
    else
    {
      return false;
    }
}

/// @brief sets the name of the war
/// @param name 
void War::setName(string name)
{
    _warName = name;
}

/// @brief sets the activeness of the war
/// @param activeness 
void War::setActive(bool activeness)
{
  this->_active = activeness;
}

/// @brief returns name of war
/// @return name of the war
string War::getName()
{
  return _warName;
}

/// @brief gets the battles at war
/// @return vector which contains the battles at war
vector<Battle*> War::getBattle()
{
  return this->battles;
}

void War::update()
{
  if (Player_1->getNextAction() == 0)//If player1 Defends
  {
    if (Player_2->getNextAction() == 0){//Defends
      this->warPhaseC->setState(new HostileState());
    }
    else if (Player_2->getNextAction() == 1)//Holds
    {
      this->warPhaseC->setState(new HostileState());
    }
    else if (Player_2->getNextAction() == 2)//surrenders
    {
      this->warPhaseC->setState(new PeacefulState());
    }
    else if (Player_2->getNextAction() == 3)//requestAlly
    {
      this->warPhaseC->setState(new HostileState());
    }
    else if (Player_2->getNextAction() == 4)//attacks
    {
      this->warPhaseC->setState(new HostileState());
    }
  }
  else if (Player_1->getNextAction() == 1)//If player 1 Holds
  {
    if (Player_2->getNextAction() == 0){
      this->warPhaseC->setState(new HostileState());
    }
    else if (Player_2->getNextAction() == 1)
    {
      this->warPhaseC->setState(new ColdState());
    }
    else if (Player_2->getNextAction() == 2)
    {
      this->warPhaseC->setState(new PeacefulState());
    }
    else if (Player_2->getNextAction() == 3)
    {
      this->warPhaseC->setState(new ColdState());
    }
    else if (Player_2->getNextAction() == 4)
    {
      this->warPhaseC->setState(new HostileState());
    }
  }
  else if (Player_1->getNextAction() == 2)//If player 1 surrenders
  {
    if (Player_2->getNextAction() == 0){
      this->warPhaseC->setState(new PeacefulState());
}
    else if (Player_2->getNextAction() == 1)
    {
      this->warPhaseC->setState(new PeacefulState());
    }
    else if (Player_2->getNextAction() == 2)
    {
      this->warPhaseC->setState(new PeacefulState());
    }
    else if (Player_2->getNextAction() == 3)
    {
      this->warPhaseC->setState(new PeacefulState());
    }
    else if (Player_2->getNextAction() == 4)
    {
      this->warPhaseC->setState(new PeacefulState());
    }
  }
  else if (Player_1->getNextAction() == 3)//If player 1 requestsAlly
  {
    if (Player_2->getNextAction() == 0){
      this->warPhaseC->setState(new HostileState());
    }
    else if (Player_2->getNextAction() == 1)
    {
      this->warPhaseC->setState(new ColdState());
    }
    else if (Player_2->getNextAction() == 2)
    {
      this->warPhaseC->setState(new PeacefulState());
    }
    else if (Player_2->getNextAction() == 3)
    {
      this->warPhaseC->setState(new ColdState());
    }
    else if (Player_2->getNextAction() == 4)
    {
      this->warPhaseC->setState(new HostileState());
    }
  }
  else if (Player_1->getNextAction() == 4)//If player 1 attacks
  {
    if (Player_2->getNextAction() == 0){
      this->warPhaseC->setState(new HostileState());
    }
    else if (Player_2->getNextAction() == 1)
    {
      this->warPhaseC->setState(new HostileState());
    }
    else if (Player_2->getNextAction() == 2)
    {
      this->warPhaseC->setState(new PeacefulState());
    }
    else if (Player_2->getNextAction() == 3)
    {
      this->warPhaseC->setState(new HostileState());
    }
    else if (Player_2->getNextAction() == 4)
    {
      this->warPhaseC->setState(new HostileState());
    }
  }
}

void War::printCountries()
{
  for (int i = 0; i < this->Countries_Eligible_for_War.size(); i++)
  {
    cout<<"Country "<<i+1<< this->Countries_Eligible_for_War[i]->getName() << endl;
  }
}
