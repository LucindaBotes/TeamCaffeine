#ifndef ITERATOR_H
#define ITERATOR_H

template<typename T> class Iterator {
  public:
    Iterator();
    virtual T& operator*() = 0;
    virtual Iterator<T> operator++() = 0;
    virtual bool operator==(const Iterator<T> &rhs) = 0;
    virtual ~Iterator() = 0;
};

#endif
