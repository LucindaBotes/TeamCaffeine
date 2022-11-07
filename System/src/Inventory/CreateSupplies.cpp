#include <Inventory/CreateSupplies.h>

using namespace std;

/**
 * @brief Create Supplies:: Create Supplies object
 */
CreateSupplies::CreateSupplies() {
}

/**
 * @brief Destroy Supplies:: Destroy Supplies object
 */
CreateSupplies::~CreateSupplies() {
}

/**
 * @brief Create Supplies:: Create Supplies Entity
 * @return Supplies*
 */
Supplies * CreateSupplies::createSuppliesEntity() {
  return new Supplies();
}