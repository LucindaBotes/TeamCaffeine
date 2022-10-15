#ifndef INTERFACE_H
#define INTERFACE_H

class Interface {
  private:
    int member;

  public:
    Interface();
    ~Interface();
    int getMember();
    void setMember(int);
};

#endif
