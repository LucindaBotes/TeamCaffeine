#include <Inventory/CreateArmour.h>
using namespace std;

/** @file CreateArmour.h
 *  @brief CreateArmour class implementation,
 *  Design Patterns:
 *  @li Design Pattern: Abstract Factory
 *  @li Participant: ConcreteFactory
 *
 *  @details CreateArmour is responsible for creating the armour entities and the iterator for the armour class.
 *  @authors: Lucinda Botes, u19048263
 */

/**
 * @brief CreateArmour:: Constructor for CreateArmour object
 */
CreateArmour::CreateArmour()
{
}

/**
 * @brief ~CreateArmour:: Destructor for CreateArmour object
 */
CreateArmour::~CreateArmour()
{
}

/**
 * @brief reateArmourEntity:: Create Armour Entity
 * @return Armour*
 */
Armour *CreateArmour::createArmourEntity()
{
  return new Armour();
}
