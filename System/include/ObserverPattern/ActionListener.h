#ifndef ACTIONLISTENER_H
#define ACTIONLISTENER_H

class ActionListener {
  private:
    int member;

  public:
    ActionListener();
    ~ActionListener();
    int getMember();
    void setMember(int);
};

#endif
