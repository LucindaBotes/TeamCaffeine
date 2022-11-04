#include "CreateSoldiers.h"

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
Soldiers * CreateSoldiers::createSoldiersEntity() {
  return new Soldiers();
}
