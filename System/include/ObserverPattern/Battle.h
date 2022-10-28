#ifndef BATTLE_H
#define BATTLE_H

#include <CountrySelection/Country.h>
#include <vector>

class Battle {
  private:
    int member;
    std::vector<Country*> Alliance_A;
    std::vector<Country*> Alliance_B;
  
  public:
    Battle();
    ~Battle();
    void start();
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
