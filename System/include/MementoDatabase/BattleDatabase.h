#ifndef BATTLEDATABASE_H
#define BATTLEDATABASE_H

class BattleDatabase {
  private:
    int member;

  public:
    BattleDatabase();
    ~BattleDatabase();
    int getMember();
    void setMember(int);
};

#endif
