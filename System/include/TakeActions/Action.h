#ifndef ACTION_H
#define ACTION_H

class Action {
  private:
    int member;

  public:
    Action();
    ~Action();
    int getMember();
    void setMember(int);
};

#endif
