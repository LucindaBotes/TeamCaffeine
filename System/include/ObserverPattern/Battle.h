#ifndef BATTLE_H
#define BATTLE_H

#include <CountrySelection/Country.h>
#include <string>
#include <vector>

class Battle {
  private:
    int member;
    string name;
    std::vector<Country> Alliance_A;
    std::vector<Country> Alliance_B;

  public:
    Battle();
    ~Battle();
    int getMember();
    void setMember(int);
    void startBattle();
};

#endif
