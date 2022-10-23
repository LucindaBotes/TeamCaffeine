#ifndef HOLD_H
#define HOLD_H

#include <TakeActions/Action.h>
class Hold : public Action{
  private:
    int member;

  public:
    Hold();
    ~Hold();
    int getMember();
    void setMember(int);

    virtual void executeAction();
    virtual void unexecuteAction();
};

#endif
