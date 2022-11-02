#ifndef COUNTRY_H
#define COUNTRY_H
#include <CountrySelection/Statistics.h>

class Country {
  private:
    int member;
    std::vector<Country*> _allies;
    Statistics* _stats;

  public:
    Country();
    ~Country();
    int getMember();
    void setMember(int);
    std::vector<Country*> getAllies();

};

#endif
