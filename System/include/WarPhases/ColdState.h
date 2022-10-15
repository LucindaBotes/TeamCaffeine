#ifndef COLDSTATE_H
#define COLDSTATE_H

class ColdState {
  private:
    int member;

  public:
    ColdState();
    ~ColdState();
    int getMember();
    void setMember(int);
};

#endif
