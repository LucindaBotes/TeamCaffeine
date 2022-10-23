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
  _head = NULL;
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

Iterator<Entity> Entity::begin()
{
  return Iterator<Entity>(this->_head);
}

Iterator<Entity> Entity::end()
{
  return Iterator<Entity>(this->_head);
}

bool Entity::isEmpty()
{
  
}