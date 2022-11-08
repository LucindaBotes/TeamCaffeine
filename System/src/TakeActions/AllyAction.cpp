#include "AllyAction.h"

using namespace std;

/**
 * @file AllyAction.h
 * @brief AllyAction class implementation to serve as the AllyAction command for the user,
 * Design Pattern:
 * @li Command Pattern: Command Pattern Concrete Command Participant
 * 
 * @details AllyAction is a command that allows the user to request for an ally to join his alliance
 * by executing allyAction on the relevant battle. 
 * 
 * @author Ruan Tristan Carlinsky ; u20416823
 */

/**
 * @brief Constructor to create a new AllyAction command object 
 * @details Takes in the current Battle object and the player number and sets the private members of the command object.
 * @param battle Battle*
 * @param playerNumber int
 */

AllyAction::AllyAction(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

/**
 * @brief Destructor to destroy AllyAction command object.
 */

AllyAction::~AllyAction() {
}

/**
 * @brief method to get the member private member of the AllyAction command object
 * 
 * @return int 
 */

int AllyAction::getMember() {
  return this->member;
}

/**
 * @brief method to set the member private member of the AllyAction command object
 * 
 * @param member int
 */

void AllyAction::setMember(int member) {
  this->member = member;
}

/**
 * @brief method to execute the AllyAction command
 * @details Executes the AllyAction command by calling the allyAction method of the battle object for the 
 * appropriate player.
 */

void AllyAction::executeAction()
{
  this->battle->allyAction(this->playerNumber);
}
