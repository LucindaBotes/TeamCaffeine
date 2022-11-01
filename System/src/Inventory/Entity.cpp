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
 */

Entity::Entity()
{
  _head = NULL;
}

Entity::~Entity()
{
}

Entity::Entity(const Entity &e)
{
  _type = e._type;
}

EntityType Entity::getType() const
{
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

/**
 * @brief Entity::begin - Returns an iterator to the beginning of the list
 *
 * @return Iteror<Entity*> - A pointer to the beginning of the list
 */
Iterator<Entity> Entity::begin()
{
  return Iterator<Entity>(this->_head);
}

/**
 * @brief Entity::end - Returns an iterator to the end of the list
 *
 * @return Iteror<Entity*> - A pointer to the end of the list
 */
Iterator<Entity> Entity::end()
{
  return Iterator<Entity>(this->_head);
}

/**
 * @brief Entity::add - Adds an entity to the list
 *
 * @param e - The entity to be added
 */

// TODO:  @todo Implement add method
// void Entity::add(Entity *e)
// {
//   if (this->_head == NULL)
//   {
//     this->_head = e;
//   }
//   else
//   {
//     Entity *current = this->_head;
//     while (current->next != NULL)
//     {
//       current = current->next;
//     }
//     current->next = e;
//   }
// }

/**
 * @brief Entity::isEmpty - Checks if the list is empty
 *
 * @return true
 * @return false
 */
bool Entity::isEmpty()
{
}