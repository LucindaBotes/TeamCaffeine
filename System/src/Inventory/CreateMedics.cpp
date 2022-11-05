#include "CreateMedics.h"

using namespace std;

/** @file CreateMedics.h
 *  @brief CreateMedics class implementation,
 *  Design Patterns:
 *  @li Design Pattern: Abstract Factory
 *  @li Participant: ConcreteFactory
 *
 *  @details CreateMedics is responsible for creating the medics entities and the iterator for the Medics class.
 *  @authors: Lucinda Botes, u19048263
 */

/**
 * @brief CreateMedics:: Constructor for Medics object
 *
 */
CreateMedics::CreateMedics()
{
}

/**
 * @brief ~CreateMedics:: Destructor for Medics object
 *
 */
CreateMedics::~CreateMedics()
{
}

/**
 * @brief CreateMedicsEntity:: Create a Medics Entity
 *
 * @return Medics*
 */
Medics *CreateMedics::createMedicsEntity()
{
  return new Medics();
}
