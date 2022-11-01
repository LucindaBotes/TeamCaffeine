#include <Inventory/Iterator.h>

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

template <typename T>
Iterator<T>::Iterator(const Iterator<T> &i, Entity *current)
{
  this->_current = current;
  this->_head = i._head;
}

template <typename T>
Iterator<T>::Iterator()
{
}

template <typename T>
Iterator<T>::Iterator(Entity *head)
{
}

template <typename T>
bool Iterator<T>::operator==(const Iterator<T> &rhs) const
{
  return _current == rhs._current;
}

template <typename T>
Iterator<T> Iterator<T>::operator++()
{
  if (this != NULL)
    _current = _current->next;
  return *this;
}

template <typename T>
T &Iterator<T>::operator*()
{
  return *_current->entity;
}

template <typename T>
Iterator<T>::~Iterator()
{
}