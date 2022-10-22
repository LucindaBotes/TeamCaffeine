#include <Inventory/WeaponsDecorator.h>

using namespace std;

WeaponsDecorator::WeaponsDecorator() {
}

WeaponsDecorator::WeaponsDecorator(const WeaponsDecorator& wd) {
    this->_decoratorType = EntityDecoratorType::WEAPON;
    this->_wrappedEntity = wd._wrappedEntity->clone();
}

WeaponsDecorator::~WeaponsDecorator() {
}

Entity* WeaponsDecorator::clone() {
  return new WeaponsDecorator(*this);
}
