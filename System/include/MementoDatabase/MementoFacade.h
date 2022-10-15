#ifndef MEMENTOFACADE_H
#define MEMENTOFACADE_H

class MementoFacade {
  private:
    int member;

  public:
    MementoFacade();
    ~MementoFacade();
    int getMember();
    void setMember(int);
};

#endif
