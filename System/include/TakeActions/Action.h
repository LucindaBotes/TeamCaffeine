#ifndef ACTION_H
#define ACTION_H
#include <ObserverPattern/Battle.h>

class Action {
  private:
    int member;

  public:
    Action();
    ~Action();
    int getMember();
    void setMember(int);

    virtual void executeAction() = 0;
};

#endif
