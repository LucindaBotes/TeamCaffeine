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
WeaponNode * CreateWeapons::createWeaponsEntity() {
  return new WeaponNode();
}

/**
 * @brief Create Weapons:: Create Weapons Iterator
 * @return WeaponsIterator*
 */
WeaponsIterator<Weapons> * CreateWeapons::createWeaponsIterator() {
  return new WeaponsIterator<Weapons>();
}
