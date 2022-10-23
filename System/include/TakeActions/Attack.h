#ifndef ATTACK_H
#define ATTACK_H

#include <TakeActions/Action.h>
class Attack : public Action{
  private:
    int member;

  public:
    Attack();
    ~Attack();
    int getMember();
    void setMember(int);

    virtual void executeAction();
    virtual void unexecuteAction();
};

#endif
