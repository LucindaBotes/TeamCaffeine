#ifndef MEMENTO_H
#define MEMENTO_H

class Memento {
  private:
    int member;

  public:
    Memento();
    ~Memento();
    int getMember();
    void setMember(int);
};

#endif
