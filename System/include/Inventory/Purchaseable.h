#ifndef PURCHASEABLE_H
#define PURCHASEABLE_H

class Purchaseable {
  private:
    int member;

  public:
    Purchaseable();
    ~Purchaseable();
    int getMember();
    void setMember(int);
};

#endif
