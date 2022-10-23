#ifndef ALLYACTION_H
#define ALLYACTION_H

#include <TakeActions/Action.h>
class AllyAction : public Action{
  private:
    int member;

  public:
    AllyAction();
    ~AllyAction();
    int getMember();
    void setMember(int);

    virtual void executeAction();
    virtual void unexecuteAction();
};

#endif
