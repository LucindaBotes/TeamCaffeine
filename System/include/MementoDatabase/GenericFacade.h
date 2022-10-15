#ifndef GENERICFACADE_H
#define GENERICFACADE_H

class GenericFacade {
  private:
    int member;

  public:
    GenericFacade();
    ~GenericFacade();
    int getMember();
    void setMember(int);
};

#endif
