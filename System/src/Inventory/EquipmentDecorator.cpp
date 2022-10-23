#include <Inventory/EquipmentDecorator.h>

using namespace std;

EquipmentDecorator::EquipmentDecorator() {
}

EquipmentDecorator::EquipmentDecorator(const EquipmentDecorator& ed) {
    this->_decoratorType = EntityDecoratorType::EQUIPMENT;
    this->_wrappedEntity = ed._wrappedEntity->clone();
}

EquipmentDecorator::~EquipmentDecorator() {
}

Entity* EquipmentDecorator::clone() {
  return new EquipmentDecorator(*this);
}