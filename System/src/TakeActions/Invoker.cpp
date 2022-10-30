#include <TakeActions/Invoker.h>
#include <TakeActions/Defend.h>
#include <TakeActions/Hold.h>
#include <TakeActions/Retreat.h>
#include <TakeActions/Surrender.h>
#include <TakeActions/AllyAction.h>
#include <TakeActions/Attack.h>

using namespace std;

Invoker::Invoker(Battle * battle, int playerNumber) {
  this->actions.push_back(new Defend(battle, playerNumber)); // Index 0 = Defend Action
  this->actions.push_back(new Hold(battle, playerNumber)); // Index 1 = Hold Action
  this->actions.push_back(new Retreat(battle, playerNumber)); // Index 2 = Retreat Action
  this->actions.push_back(new Surrender(battle, playerNumber)); // Index 3 = Surrender Action
  this->actions.push_back(new AllyAction(battle, playerNumber)); // Index 4 = AllyAction Action
  this->actions.push_back(new Attack(battle, playerNumber)); // Index 5 = Attack Action
  this->playerNumber = playerNumber;
}

Invoker::~Invoker() {
  for (int i =0; i < this->actions.size(); i++)
  {
    delete this->actions[i];
  }
  this->actions.clear();
  for (int i =0; i < this->actionTracker.size(); i++)
  {
    delete this->actionTracker[i];
  }
  this->actionTracker.clear();
}

int Invoker::getMember() {
  return this->member;
}

void Invoker::setMember(int member) {
  this->member = member;
}

void Invoker::defendAlliance(){
  this->actions[0]->executeAction();
  this->actionTracker.push_back(this->actions[0]);
}

void Invoker::hold(){
  this->actions[1]->executeAction();
  this->actionTracker.push_back(this->actions[1]);
}

void Invoker::retreat(){
  this->actions[2]->executeAction();
  this->actionTracker.push_back(this->actions[2]);
}

void Invoker::surrender(){
  this->actions[3]->executeAction();
  this->actionTracker.push_back(this->actions[3]);
}

void Invoker::requestAlly(){
  this->actions[4]->executeAction();
  this->actionTracker.push_back(this->actions[4]);
}

void Invoker::attackEnemyAlliance(){
  this->actions[5]->executeAction();
  this->actionTracker.push_back(this->actions[5]);
}