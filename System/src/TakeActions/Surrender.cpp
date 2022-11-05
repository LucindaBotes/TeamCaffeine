#include <TakeActions/Surrender.h>

using namespace std;

/**
 * @file Surrender.h
 * @brief Surrender class implementation to serve as the Surrender command for the user,
 * Design Pattern:
 * @li Command Pattern: Command Pattern Concrete Command Participant
 * 
 * @details Surrender is a command that allows the user to surrender and give up the war by executing surrender
 * on the relevant battle.
 * 
 * @author Ruan Tristan Carlinsky ; u20416823
 */

/**
 * @brief Constructor to create a new Surrender command object 
 * @details Takes in the current Battle object and the player number and sets the private members of the command object.
 * @param battle Battle*
 * @param playerNumber int
 */

Surrender::Surrender(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

/**
 * @brief Destructor to destroy Hold command object.
 */

Surrender::~Surrender() {
}

/**
 * @brief method to get the member private member of the invoker
 * 
 * @return int 
 */

int Surrender::getMember() {
  return this->member;
}

/**
 * @brief method to set the member private member of the invoker
 * 
 * @param member int
 */

void Surrender::setMember(int member) {
  this->member = member;
}

/**
 * @brief method to execute the Surrender command
 * @details Executes the Surrender command by calling the surrender method of the battle object for the 
 * appropriate player.
 */
void Surrender::executeAction()
{
  this->battle->surrender(this->playerNumber);
}