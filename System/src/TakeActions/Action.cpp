#include "Action.h"

using namespace std;

/**
 * @file Action.h
 * @brief Action class interface implementation for actions to be invoked by the user,
 * Design Pattern:
 * @li Command Pattern: Command Pattern Command Interface Participant
 * 
 * @details Action creates the interface that child actions will inherit from to allow the user to execute these commands to participate in the War.
 * 
 * @author Ruan Tristan Carlinsky ; u20416823
 */

/**
 * @brief Default Action constructor to create new object, will not be called as class is abstract.
 * 
 */

Action::Action() {
}

/**
 * @brief Default Action destructor to create destroy object.
 * 
 */
Action::~Action() {
}

/**
 * @brief method to get the member private member of the Action
 * 
 * @return int 
 */
int Action::getMember() {
  return this->member;
}

/**
 * @brief method to set the member private member of the Action
 * 
 * @param member int
 */
void Action::setMember(int member) {
  this->member = member;
}