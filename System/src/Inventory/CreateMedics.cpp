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
MedicNode * CreateMedics::createMedicsEntity() {
  return new MedicNode();
}

/**
 * @brief Create a Medics:: Create Medics Iterator
 * 
 * @return MedicsIterator* 
 */
MedicsIterator<Medics> * CreateMedics::createMedicsIterator() {
  return new MedicsIterator<Medics>();
}
