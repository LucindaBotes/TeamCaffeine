#ifndef COUNTRY_H
#define COUNTRY_H

class Country {
  private:
    int member;

  public:
    Country();
    ~Country();
    int getMember();
    void setMember(int);
};

#endif
