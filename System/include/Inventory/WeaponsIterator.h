#ifndef WEAPONSITERATOR_H
#define WEAPONSITERATOR_H

template <typename T> class WeaponsIterator : public Iterator {
  friend class Weapons;
  private:
    int member;

  public:
    WeaponsIterator();
    T& operator*() override;
    WeaponsIterator<T> operator++() override;
    bool operator==(const WeaponsIterator<T> &rhs) override;
    ~WeaponsIterator() override;
};

#endif
