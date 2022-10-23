#ifndef SURRENDER_H
#define SURRENDER_H

#include <TakeActions/Action.h>
class Surrender : public Action{
  private:
    int member;

  public:
    Surrender();
    ~Surrender();
    int getMember();
    void setMember(int);

    virtual void executeAction();
    virtual void unexecuteAction();
};

#endif
