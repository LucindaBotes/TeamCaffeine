#include "Invoker.h"
#include "Defend.h"
#include "Hold.h"
#include "Surrender.h"
#include "AllyAction.h"
#include "Attack.h"

using namespace std;

/**
 * @file Invoker.h
 * @brief Invoker class implementation for actions invoked by the user,
 * Design Pattern:
 * @li Command Pattern: Command Pattern Invoker Participant
 * 
 * @details Invoker enables the user to perform actions through a set of commands that allows the user to participate in the War.
 * 
 * @author Ruan Tristan Carlinsky ; u20416823
 */

/**
 * @brief Invoker constructor to create and allow instantiation of Invoker objects.
 * @details Takes in an integer indicating the player number and creates a new Invoker object for that player to serve as a controller.
 * @param playerNumber int
 */

Invoker::Invoker(int playerNumber) {
  this->playerNumber = playerNumber;
}

/**
 * @brief Invoker destructor to destroy Invoker objects.
 * @details Destroys Invoker object and deletes all the actions contained in the actions and actionTracker array private members.
 */
Invoker::~Invoker() {
  for (int i =0; i < this->actions.size(); i++)
  {
    delete this->actions[i];
  }
  this->actions.clear();
  for (int i =0; i < this->actionTracker.size(); i++)
  {
    delete this->actionTracker[i];
  }
  this->actionTracker.clear();
}

/**
 * @brief method to get the member private member of the invoker
 * 
 * @return int 
 */
int Invoker::getMember() {
  return this->member;
}

/**
 * @brief method to set the member private member of the invoker
 * 
 * @param member int
 */
void Invoker::setMember(int member) {
  this->member = member;
}

/**
 * @brief Method to allow user to call defend command. 
 * @details This method invokes the defend command and pushes the action into the actionTracker vector. 
 * 
 */
void Invoker::defendAlliance(){
  this->actions[0]->executeAction();
  this->actionTracker.push_back(this->actions[0]);
}

/**
 * @brief Method to allow user to call hold command. 
 * @details This method invokes the hold command and pushes the action into the actionTracker vector. 
 * 
 */
void Invoker::hold(){
  this->actions[1]->executeAction();
  this->actionTracker.push_back(this->actions[1]);
}

/**
 * @brief Method to allow user to call surrender command. 
 * @details This method invokes the surrender command and pushes the action into the actionTracker vector. 
 * 
 */
void Invoker::surrender(){
  this->actions[2]->executeAction();
  this->actionTracker.push_back(this->actions[2]);
}

/**
 * @brief Method to allow user to call requestAlly command. 
 * @details This method invokes the requestAlly command and pushes the action into the actionTracker vector. 
 * 
 */
void Invoker::requestAlly(){
  this->actions[3]->executeAction();
  this->actionTracker.push_back(this->actions[3]);
}

/**
 * @brief Method to allow user to call attackEnemyAlliance command. 
 * @details This method invokes the attackEnemyAlliance command and pushes the action into the actionTracker vector. 
 * 
 */
void Invoker::attackEnemyAlliance(){
  this->actions[4]->executeAction();
  this->actionTracker.push_back(this->actions[4]);
}

/**
 * @brief Method to set the next action to be executed by the Invoker.
 * @details This method stores the action that the user selected as an integer from a list of actions displayed in the main.
 * @param action int
 */

void Invoker::nextAction(int action)
{
  this->nextaction = action;
}

/**
 * @brief Method to get the next action to be executed by the Invoker.
 * @details This method returns the action that the user selected as an integer from a list of actions displayed in the main.
 * @return int
 */

int Invoker::getNextAction()
{
  return this->nextaction;
}

/**
 * @brief Method to set all the commands for the Invoker.
 * @details This method takes in a Battle object that the Invoker will execute the invoked commands on. It then creates a new 
 * Defend, Hold, Surrender, AllyAction and Attack object and stores them in the actions vector.
 * @param battle Battle*
 */
void Invoker::setBattleActions(Battle * battle)
{
  this->actions.push_back(new Defend(battle, playerNumber)); // Index 0 = Defend Action
  this->actions.push_back(new Hold(battle, playerNumber)); // Index 1 = Hold Action
  this->actions.push_back(new Surrender(battle, playerNumber)); // Index 2 = Surrender Action
  this->actions.push_back(new AllyAction(battle, playerNumber)); // Index 3 = AllyAction Action
  this->actions.push_back(new Attack(battle, playerNumber)); // Index 4 = Attack Action
}