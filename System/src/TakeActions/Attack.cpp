#include <TakeActions/Attack.h>

using namespace std;

/**
 * @file Attack.h
 * @brief Attack class implementation to serve as the Attack command for the user,
 * Design Pattern:
 * @li Command Pattern: Command Pattern Concrete Command Participant
 * 
 * @details Attack is a command that allows the user to attack the enemy alliance and deal damage on its consisting countries
 * by executing Attack on the relevant battle. 
 * 
 * @author Ruan Tristan Carlinsky ; u20416823
 */


/**
 * @brief Constructor to create a new Attack command object 
 * @details Takes in the current Battle object and the player number and sets the private members of the command object.
 * @param battle Battle*
 * @param playerNumber int
 */

Attack::Attack(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

/**
 * @brief Destructor to destroy AllyAction command object.
 */

Attack::~Attack() {
}

/**
 * @brief method to get the member private member of the Attack command object
 * 
 * @return int 
 */

int Attack::getMember() {
  return this->member;
}

/**
 * @brief method to set the member private member of the Attack command object
 * 
 * @param member int
 */
void Attack::setMember(int member) {
  this->member = member;
}

/**
 * @brief method to execute the Attack command
 * @details Executes the Attack command by calling the Attack method of the battle object for the 
 * appropriate player.
 */

void Attack::executeAction()
{
  this->battle->attack(this->playerNumber);
}