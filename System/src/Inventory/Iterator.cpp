#include "Iterator.h"

using namespace std;

/** @file Iterator.h
 *  @brief Iterator class implementation,
 *
 *  @li Design Pattern: Iterator
 *  @li Participant: Iterator
 *
 *  @details CreateSupplies is responsible for creating the supplies entities and the iterator for the Supplies class.
 *  @authors: Lucinda Botes, u19048263
 */

/**
 * @brief Construct a new Iterator< T>:: Iterator object
 *
 * @tparam T - Any class that inherits from Entity
 * @param i - A reference to an Iterator object
 * @param current - The current Entity object
 */
template <typename T>
Iterator<T>::Iterator(const Iterator<T> &i, Entity *current)
{
  this->_current = current;
  this->_head = i._head;
}

/**
 * @brief Construct a new default Iterator< T>:: Iterator object
 *
 * @tparam T - Any class that inherits from Entity
 */
template <typename T>
Iterator<T>::Iterator()
{
}

/**
 * @brief Construct a new Iterator< T>:: Iterator object
 *
 * @tparam T - Any class that inherits from Entity
 * @param head - The head of the list
 */
template <typename T>
Iterator<T>::Iterator(Entity *head)
{
}

/**
 * @brief Iterator< T>:: operator* - Dereference operator
 *
 * @tparam T - Any class that inherits from Entity
 * @return T& - A reference to the current Entity object
 */
template <typename T>
bool Iterator<T>::operator==(const Iterator<T> &rhs) const
{
  return _current == rhs._current;
}

/**
 * @brief Iterator< T>:: operator* - Dereference operator
 *
 * @tparam T - Any class that inherits from Entity
 * @return T& - A reference to the current Entity object
 */
template <typename T>
Iterator<T> Iterator<T>::operator++()
{
  if (this != NULL)
    _current = _current->next;
  return *this;
}

/**
 * @brief Iterator< T>:: operator* - Dereference operator
 *
 * @tparam T - Any class that inherits from Entity
 * @return T& - A reference to the current Entity object
 */
template <typename T>
T &Iterator<T>::operator*()
{
  return *_current->entity;
}

/**
 * @brief Destroy the Iterator< T>:: Iterator object
 *
 * @tparam T - Any class that inherits from Entity
 */
template <typename T>
Iterator<T>::~Iterator()
{
}
