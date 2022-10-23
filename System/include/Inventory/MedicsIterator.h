#ifndef MEDICSITERATOR_H
#define MEDICSITERATOR_H

#include <Inventory/Medics.h>
#include <Inventory/Iterator.h>
#include <Inventory/MedicNode.h>

template <typename T> class MedicsIterator : public Iterator {
  friend class Medics;
  private:
    MedicsIterator(const Medics& MedicNode*);
    MedicNode * head;
    MedicNode * current;

  public:
    MedicsIterator();
    T& operator*() override;
    MedicsIterator<T> operator++() override;
    bool operator==(const MedicsIterator<T> &rhs, MedicNode *p) const override;
    ~MedicsIterator() override;
};

#endif
