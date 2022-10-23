#ifndef DEFEND_H
#define DEFEND_H

#include <TakeActions/Action.h>
class Defend : public Action{
  private:
    int member;

  public:
    Defend();
    ~Defend();
    int getMember();
    void setMember(int);

    virtual void executeAction();
    virtual void unexecuteAction();
};

#endif
