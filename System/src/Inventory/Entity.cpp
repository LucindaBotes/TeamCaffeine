#include "Entity.h"

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
*/

/**
 * @brief Create Entity:: Create Entity object
 * @details Create Entity object with passed in EntityType enum value
 * @param t EntityType
 */
Entity::Entity(EntityType t) {
  this->_type = t;
}

/**
 * @brief Destroy Entity:: Destroy Entity object
 */
Entity::~Entity() {
}

/**
 * @brief Create Entity:: Create Entity object
 * @details Create Entity object with passed in @code Entity @endcode 
 * @return EntityType
 */
Entity::Entity(const Entity &e) {
  _type = e._type;
}

/**
 * @brief Get Entity Type:: Get Entity Type
 * @details Gets the Entity's @code _type @endcode member value.
 * @return EntityType
 */
EntityType Entity::getType() const{
  return _type;
}

/**
 * @brief Get Enity Price:: Get Entity Price
 * @details Gets the Entity's @code _price @endcode member value.
 * @return double 
 */
double Entity::getPrice() const
{
  return _price;
}

/**
 * @brief Set Entity:: Set Entity price value
 * @details Sets the Entity's @code _price @endcode member value to passed in @code price @endcode parameter.
 * @param price double
 */
void Entity::setPrice(double price)
{
  _price = price;
}

/**
 * @brief Add Entity Decorator:: Add decorator to Entity
 * @details Adds an entity as a decorator to the current entity by making the passed in @code Entity @endcode parameter the head and the previous head becomes the passed in parameters next value.
 */
void Entity::addEntity(Entity* e)
{
  e->_next = this->_head;
  this->_head = e;
}
