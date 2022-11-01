#include <Inventory/CreateSupplies.h>

using namespace std;

/** @file CreateSupplies.h
 *  @brief CreateSupplies class implementation,
 *  Design Patterns:
 *  @li Design Pattern: Abstract Factory
 *  @li Participant: ConcreteFactory
 *
 *  @details CreateSupplies is responsible for creating the supplies entities and the iterator for the Supplies class.
 *  @authors: Lucinda Botes, u19048263
 */

/**
 * @brief CreateSupplies:: Constructor for Supplies object
 */
CreateSupplies::CreateSupplies()
{
}

/**
 * @brief ~CreateSupplies:: Destructor for Supplies object
 */
CreateSupplies::~CreateSupplies()
{
}

/**
 * @brief CreateSuppliesEntity:: Create Supplies Entity
 * @return Supplies*
 */
Supplies *CreateSupplies::createSuppliesEntity()
{
  return new Supplies();
}
