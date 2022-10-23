#ifndef RETREAT_H
#define RETREAT_H

#include <TakeActions/Action.h>
class Retreat : public Action{
  private:
    int member;

  public:
    Retreat();
    ~Retreat();
    int getMember();
    void setMember(int);

    virtual void executeAction();
    virtual void unexecuteAction();
};

#endif
