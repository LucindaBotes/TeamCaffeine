#include <UserInterface/War.h>

using namespace std;

War::War() {
}

War::~War() {
}

int War::getMember() {
  return this->member;
}

void War::setMember(int member) {
  this->member = member;
}

void War::setPlayer1()
{
  this->Player_1 = new Invoker(this->battles[this->battles.size()] , 1);
}

void War::setPlayer2()
{
  this->Player_2 = new Invoker(this->battles[this->battles.size()] , 2);
}

Invoker * War::getPlayer1()
{
  return this->Player_1;
}

Invoker * War::getPlayer1()
{
  return this->Player_2;
}

void War::addBattle(Battle * battle)
{
  this->battles.push_back(battle);
}


