#ifndef SOLDIERITERATOR_H
#define SOLDIERITERATOR_H

template <typename T> class SoldierIterator : public Iterator {
  friend class Soldier;
  private:
    int member;

  public:
    SoldierIterator();
    T& operator*() override;
    SoldierIterator<T> operator++() override;
    bool operator==(const SoldierIterator<T> &rhs) override;
    ~SoldierIterator() override;
};

#endif