#include <Inventory/MedicsDecorator.h>

using namespace std;

MedicsDecorator::MedicsDecorator() {
}

MedicsDecorator::MedicsDecorator(const MedicsDecorator& md) {
    this->_decoratorType = EntityDecoratorType::MEDIC;
    this->_wrappedEntity = md._wrappedEntity->clone();
}

MedicsDecorator::~MedicsDecorator() {
}

Entity* MedicsDecorator::clone() {
  return new MedicsDecorator(*this);
}
