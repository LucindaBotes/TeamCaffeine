#include <Inventory/SuppliesDecorator.h>

using namespace std;

SuppliesDecorator::SuppliesDecorator() {
}

SuppliesDecorator::SuppliesDecorator(const SuppliesDecorator& sd) {
    this->_decoratorType = EntityDecoratorType::SUPPLY;
    this->_wrappedEntity = sd._wrappedEntity->clone();
}

SuppliesDecorator::~SuppliesDecorator() {
}

Entity* SuppliesDecorator::clone() {
  return new SuppliesDecorator(*this);
}
