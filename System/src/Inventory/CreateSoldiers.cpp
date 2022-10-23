#include <Inventory/CreateSoldiers.h>

using namespace std;

/**
 * @brief Create a Soldiers:: Create Soldiers object
 */
CreateSoldiers::CreateSoldiers() {
}

/**
 * @brief Destroy a Soldiers:: Destroy Soldiers object
 */
CreateSoldiers::~CreateSoldiers() {
}

/**
 * @brief Create a Soldiers:: Create Soldiers Entity
 * @return Soldiers*
 */
SoldierNode * CreateSoldiers::createSoldiersEntity() {
  return new SoldierNode();
}

/**
 * @brief Create a Soldiers:: Create Soldiers Iterator
 * @return SoldiersIterator*
 */
SoldierIterator<Soldiers> * CreateSoldiers::createSoldiersIterator() {
  return new SoldierIterator<Soldiers>();
}
