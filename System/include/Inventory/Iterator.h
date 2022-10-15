#ifndef ITERATOR_H
#define ITERATOR_H

class Iterator {
  private:
    int member;

  public:
    Iterator();
    ~Iterator();
    int getMember();
    void setMember(int);
};

#endif
