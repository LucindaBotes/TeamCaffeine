#ifndef SUPPLIESITERATOR_H
#define SUPPLIESITERATOR_H

#include <Inventory/Supplies.h>
#include <Inventory/Iterator.h>

template <typename T> class SuppliesIterator : public Iterator {
  friend class Supplies;
  private:
    Supplies* head;
    Supplies* current;
    SuppliesIterator(Supplies* head);
    SuppliesIterator()

  public:
    SuppliesIterator();
    T& operator*() override;
    SuppliesIterator<T> operator++() override;
    bool operator==(const SuppliesIterator<T> &rhs) const override;
    ~SuppliesIterator() override;
};

#endif
