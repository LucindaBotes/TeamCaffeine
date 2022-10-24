#ifndef BATTLE_H
#define BATTLE_H

class Battle {
  private:
    int member;

  public:
    Battle();
    ~Battle();
    int getMember();
    void setMember(int);
    void defend();
    void hold();
    void retreat();
    void surrender();
    void allyAction();
    void attack();
};

#endif
