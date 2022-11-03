#ifndef SOLDIERITERATOR_H
#define SOLDIERITERATOR_H

class SoldierIterator {
  private:
    int member;

  public:
    SoldierIterator();
    ~SoldierIterator();
    int getMember();
    void setMember(int);
};

#endif
