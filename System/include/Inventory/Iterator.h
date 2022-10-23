#ifndef ITERATOR_H
#define ITERATOR_H

#include <Inventory/Entity.h>

template<typename T> class Iterator {
  friend class Entity;
  private:
    T* _current;
    T* _head;
    Iterator(const Iterator<T> &i, Entity* current);
  public:
    Iterator(Entity* head);
    T& operator*();
    Iterator<T> operator++();
    bool operator==(const Iterator<T> &rhs) const;
    ~Iterator();
};

#endif
