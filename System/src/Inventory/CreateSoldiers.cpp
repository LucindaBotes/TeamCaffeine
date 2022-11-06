#include "CreateSoldiers.h"

using namespace std;

/** @file CreateSoldiers.h
 *  @brief CreateSoldiers class implementation,
 *  Design Patterns:
 *  @li Design Pattern: Abstract Factory
 *  @li Participant: ConcreteFactory
 *
 *  @details CreateSoldiers is responsible for creating the soldiers entities and the iterator for the Soldiers class.
 *  @authors: Lucinda Botes, u19048263
 */

/**
 * @brief CreateSoldiers:: Constructor for Soldiers object
 */
CreateSoldiers::CreateSoldiers()
{
}

/**
 * @brief ~CreateSoldiers:: Destructor for Soldiers object
 */
CreateSoldiers::~CreateSoldiers()
{
}

/**
 * @brief CreateSoldiersEntity:: Create a Soldiers Entity
 * @return Soldiers*
 */
Soldiers *CreateSoldiers::createSoldiersEntity()
{
  return new Soldiers();
}
