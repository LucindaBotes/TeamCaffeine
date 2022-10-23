#include <Inventory/EntityDecorator.h>

using namespace std;

// TODO: Add doxygen comments here

EntityDecorator::EntityDecorator() {
}

EntityDecorator::~EntityDecorator() {
}

EntityDecoratorType EntityDecorator::getType() const {
  return this->_decoratorType;
}
