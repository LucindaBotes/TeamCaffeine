#include <ObserverPattern/BattleListener.h>

using namespace std;

BattleListener::BattleListener() {
}

BattleListener::~BattleListener() {
   this->actionListeners.clear();
}

int BattleListener::getMember() {
  return this->member;
}

void BattleListener::setMember(int member) {
  this->member = member;
}

void BattleListener::setBattle(Battle * battle){
  this->battle = battle;
}

void BattleListener::addListener(ActionListener * listener){
  this->actionListeners.push_back(listener);
}

void BattleListener::removeListener(ActionListener * listener){
  for (int i =0; i < this->actionListeners.size(); i++)
  {
    if (this->actionListeners[i] == listener)
    {
      this->actionListeners.erase(this->actionListeners.begin() + i);
    }
  }
}

void BattleListener::notifyListeners(){

}