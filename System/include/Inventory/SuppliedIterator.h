#ifndef SUPPLIEDITERATOR_H
#define SUPPLIEDITERATOR_H

class SuppliedIterator {
  private:
    int member;

  public:
    SuppliedIterator();
    ~SuppliedIterator();
    int getMember();
    void setMember(int);
};

#endif
