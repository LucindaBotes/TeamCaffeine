#ifndef INVOKER_H
#define INVOKER_H

class Invoker {
  private:
    int member;

  public:
    Invoker();
    ~Invoker();
    int getMember();
    void setMember(int);
};

#endif
