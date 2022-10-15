#ifndef BATTLELISTENER_H
#define BATTLELISTENER_H

class BattleListener {
  private:
    int member;

  public:
    BattleListener();
    ~BattleListener();
    int getMember();
    void setMember(int);
};

#endif
