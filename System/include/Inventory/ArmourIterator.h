#ifndef ARMOURITERATOR_H
#define ARMOURITERATOR_H

#include <Inventory/Armour.h>
#include <Inventory/Iterator.h>

template<typename T> class ArmourIterator : public Iterator {
  friend class Armour;
  private:
    int member;

  public:
    ArmourIterator();
    T& operator*() override;
    ArmourIterator<T> operator++() override;
    bool operator==(const ArmourIterator<T> &rhs) override;
    ~ArmourIterator() override;
};

#endif
