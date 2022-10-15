#ifndef BATTLEMEMENTO_H
#define BATTLEMEMENTO_H

class BattleMemento {
  private:
    int member;

  public:
    BattleMemento();
    ~BattleMemento();
    int getMember();
    void setMember(int);
};

#endif
