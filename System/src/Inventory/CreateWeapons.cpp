#include "CreateWeapons.h"

using namespace std;

/** @file CreateWeapons.h
 *  @brief CreateWeapons class implementation,
 *  Design Patterns:
 *  @li Design Pattern: Abstract Factory
 *  @li Participant: ConcreteFactory
 *
 *  @details CreateWeapons is responsible for creating the weapons entities and the iterator for the Weapons class.
 *  @authors: Lucinda Botes, u19048263
 */

/**
 * @brief CreateWeapons:: Constructor for Weapons object
 */
CreateWeapons::CreateWeapons()
{
}

/**
 * @brief ~CreateWeapons:: Destructor for Weapons object
 */
CreateWeapons::~CreateWeapons()
{
}

/**
 * @brief CreateWeaponsEntity:: Create Weapons Entity
 * @return Weapons*
 */
Weapons *CreateWeapons::createWeaponsEntity()
{
  return new Weapons();
}
