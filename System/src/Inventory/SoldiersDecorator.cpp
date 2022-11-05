#include <Inventory/SoldiersDecorator.h>

using namespace std;

SoldiersDecorator::SoldiersDecorator() {
}

SoldiersDecorator::SoldiersDecorator(const SoldiersDecorator& sd) {
    this->_decoratorType = EntityDecoratorType::SOLDIER;
    this->_wrappedEntity = sd._wrappedEntity->clone();
}

SoldiersDecorator::~SoldiersDecorator() {
}

Entity* SoldiersDecorator::clone() {
  return new SoldiersDecorator(*this);
}
