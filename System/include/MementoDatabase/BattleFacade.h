#ifndef BATTLEFACADE_H
#define BATTLEFACADE_H

class BattleFacade {
  private:
    int member;

  public:
    BattleFacade();
    ~BattleFacade();
    int getMember();
    void setMember(int);
};

#endif
