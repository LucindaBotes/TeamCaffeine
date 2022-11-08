#include "Hold.h"

using namespace std;

/**
 * @file Hold.h
 * @brief Hold class implementation to serve as the Hold command for the user,
 * Design Pattern:
 * @li Command Pattern: Command Pattern Concrete Command Participant
 * 
 * @details Defend is a command that allows the user to hold his alliance by executing hold
 * on the relevant battle.
 * 
 * @author Ruan Tristan Carlinsky ; u20416823
 */

/**
 * @brief Constructor to create a new Hold command object 
 * @details Takes in the current Battle object and the player number and sets the private members of the command object.
 * @param battle Battle*
 * @param playerNumber int
 */

Hold::Hold(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

/**
 * @brief Destructor to destroy Hold command object.
 */
Hold::~Hold() {
}

/**
 * @brief method to get the member private member of the Hold command object
 * 
 * @return int 
 */

int Hold::getMember() {
  return this->member;
}

/**
 * @brief method to set the member private member of the Hold command object
 * 
 * @param member int
 */
void Hold::setMember(int member) {
  this->member = member;
}

/**
 * @brief method to execute the Hold command
 * @details Executes the Hold command by calling the hold method of the battle object for the 
 * appropriate player.
 */
void Hold::executeAction()
{
  this->battle->hold(this->playerNumber);
}


