#include <Inventory/CreateMedics.h>

using namespace std;


/**
 * @brief Create a Medics:: Create Medics object
 * 
 */
CreateMedics::CreateMedics() {
}


/**
 * @brief Destroy a Medics:: Destroy Medics object
 * 
 */
CreateMedics::~CreateMedics() {
}

/**
 * @brief Create a Medics:: Create Medics Entity
 * 
 * @return Medics* 
 */
Medics * CreateMedics::createMedicsEntity() {
  return new Medics();
}