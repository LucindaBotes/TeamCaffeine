#ifndef WEAPONSITERATOR_H
#define WEAPONSITERATOR_H

class WeaponsIterator {
  private:
    int member;

  public:
    WeaponsIterator();
    ~WeaponsIterator();
    int getMember();
    void setMember(int);
};

#endif
