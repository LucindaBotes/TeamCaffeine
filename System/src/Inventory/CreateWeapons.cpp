#include <Inventory/CreateWeapons.h>

using namespace std;

/**
 * @brief Create Weapons:: Create Weapons object
 */
CreateWeapons::CreateWeapons() {
}

/**
 * @brief Destroy Weapons:: Destroy Weapons object
 */
CreateWeapons::~CreateWeapons() {
}

/**
 * @brief Create Weapons:: Create Weapons Entity
 * @return Weapons*
 */
Weapons * CreateWeapons::createWeaponsEntity() {
  return new Weapons();
}