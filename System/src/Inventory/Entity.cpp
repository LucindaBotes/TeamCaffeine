#include <Inventory/Entity.h>

using namespace std;

/** 
*  @file Entity.h
*  @brief Entity class implementation,
*  Design Patterns:
*  @li Template Method: Abstract class participant
*  @li Prototype: Interface participant
*  @li Decorator: Component participant
*  @li Factory: Product participant
*
*  @details Entity defines interface for Entity objects and relevant Design patterns.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*  @author Lucinda Botes ; u19012366
*TODO:  @todo Define decorator extra method
*/

Entity::Entity() {

}

Entity::Entity(double price) {
  this->_price = price;
}

Entity::~Entity() {
}

Entity::Entity(const Entity &e) {
  _type = e._type;
}

EntityType Entity::getType() const{
  return _type;
}

double Entity::getPrice() const
{
  return _price;
}

void Entity::setPrice(double price)
{
  _price = price;
}
