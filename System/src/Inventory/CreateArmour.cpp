#include <Inventory/CreateArmour.h>
using namespace std;

/** 
*  @brief CreateArmour class implementation,
*  @li Design Pattern: Abstract Factory
*  @li Participant: ConcreteFactory
*
*  @details CreateArmour is responsible for creating the armour entities and the iterator for the armour class.
*  @authors: Lucinda Botes, u19048263
*/

/**
 * @brief Create Armour:: Create Armour object
 */
CreateArmour::CreateArmour() {
}

/**
 * @brief Create Armour:: Destroy Armour object
 */
CreateArmour::~CreateArmour() {
}

/**
 * @brief Create Armour:: Create Armour Entity
 * @return Armour*
 */
ArmourNode * CreateArmour::createArmourEntity() {
  return new ArmourNode();
}

/**
 * @brief Create Armour:: Create Armour Iterator
 * @return ArmourIterator*
 */
ArmourIterator<Armour> * CreateArmour::createArmourIterator() {
  return new ArmourIterator<Armour>();
}
