#ifndef BATTLELISTENER_H
#define BATTLELISTENER_H

#include <ObserverPattern/Observable.h>
#include <ObserverPattern/Battle.h>
#include <UserInterface/War.h>

class BattleListener : public Observable{
  private:
    int member;
    std::vector<ActionListener*> actionListeners;
    Battle * battle;
  
  public:
    BattleListener();
    ~BattleListener();
    int getMember();
    void setMember(int);
    void setBattle(Battle * battle);
    void addListener(ActionListener * listener);
    void removeListener(ActionListener * listener);
    void notifyListeners();
};
#endif
