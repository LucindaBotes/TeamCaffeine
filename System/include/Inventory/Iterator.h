#ifndef ITERATOR_H
#define ITERATOR_H

#include "Entity.h"

template <typename T>
class Iterator
{
  friend class Entity;

private:
  T *_current;
  T *_head;
  Iterator(const Iterator<T> &i, T *current);

public:
  Iterator();
  Iterator(T *head);
  T &operator*();
  Iterator<T> operator++();
  bool operator==(const Iterator<T> &rhs) const;
  ~Iterator();
};

#endif
