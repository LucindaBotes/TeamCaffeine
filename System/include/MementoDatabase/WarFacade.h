#ifndef WARFACADE_H
#define WARFACADE_H

class WarFacade {
  private:
    int member;

  public:
    WarFacade();
    ~WarFacade();
    int getMember();
    void setMember(int);
};

#endif
