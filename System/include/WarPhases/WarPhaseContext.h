#ifndef WARPHASECONTEXT_H
#define WARPHASECONTEXT_H

class WarPhaseContext {
  private:
    int member;

  public:
    WarPhaseContext();
    ~WarPhaseContext();
    int getMember();
    void setMember(int);
};

#endif
