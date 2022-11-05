#include <TakeActions/Defend.h>

using namespace std;

/**
 * @file Defend.h
 * @brief Defend class implementation to serve as the defend command for the user,
 * Design Pattern:
 * @li Command Pattern: Command Pattern Concrete Command Participant
 * 
 * @details Defend is a command that allows the user to defend his alliance by executing defend
 * on the relevant battle by using available defense unit points in preparation for the coming battle.
 * 
 * @author Ruan Tristan Carlinsky ; u20416823
 */

/**
 * @brief Constructor to create a new Defend command object 
 * @details Takes in the current Battle object and the player number and sets the private members of the command object.
 * @param battle Battle*
 * @param playerNumber int
 */
Defend::Defend(Battle * battle, int playerNumber) {
  this->battle = battle;
  this->playerNumber = playerNumber;
}

/**
 * @brief Destructor to destroy Defend command object.
 */
Defend::~Defend() {
}

/**
 * @brief method to get the member private member of the invoker
 * 
 * @return int 
 */
int Defend::getMember() {
  return this->member;
}

/**
 * @brief method to set the member private member of the invoker
 * 
 * @param member int
 */
void Defend::setMember(int member) {
  this->member = member;
}

/**
 * @brief method to execute the defend command
 * @details Executes the defend command by calling the defend method of the battle object for the 
 * appropriate player.
 */
void Defend::executeAction()
{
  this->battle->defend(this->playerNumber);
}
