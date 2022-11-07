#include <Inventory/MedicsDecorator.h>

using namespace std;

MedicsDecorator::MedicsDecorator() : EntityDecorator(EntityType::MEDIC) {

}

MedicsDecorator::MedicsDecorator(const MedicsDecorator& md) : EntityDecorator(EntityType::MEDIC) {
    this->_wrappedEntity = md._wrappedEntity->clone();
}

MedicsDecorator::~MedicsDecorator() {
}

Entity* MedicsDecorator::clone() {
  return new MedicsDecorator(*this);
}