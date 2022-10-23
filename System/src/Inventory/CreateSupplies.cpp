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
SupplyNode * CreateSupplies::createSuppliesEntity() {
  return new SupplyNode();
}

/**
 * @brief Create Supplies:: Create Supplies Iterator
 * @return SuppliesIterator*
 */
SuppliesIterator<Supplies> * CreateSupplies::createSuppliesIterator() {
  return new SuppliesIterator<Supplies>();
}
