#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy {
  private:
    int member;

  public:
    Strategy();
    ~Strategy();
    int getMember();
    void setMember(int);
};

#endif
