#ifndef MEDICSITERATOR_H
#define MEDICSITERATOR_H

class MedicsIterator {
  private:
    int member;

  public:
    MedicsIterator();
    ~MedicsIterator();
    int getMember();
    void setMember(int);
};

#endif
