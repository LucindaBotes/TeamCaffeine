#include "Invoker.h"
#include "Defend.h"
#include "Hold.h"
#include "Surrender.h"
#include "AllyAction.h"
#include "Attack.h"

using namespace std;

// Invoker::Invoker(int playerNumber) {
//   this->playerNumber = playerNumber;
// }

// Invoker::~Invoker() {
//   for (int i =0; i < this->actions.size(); i++)
//   {
//     delete this->actions[i];
//   }
//   this->actions.clear();
//   for (int i =0; i < this->actionTracker.size(); i++)
//   {
//     delete this->actionTracker[i];
//   }
//   this->actionTracker.clear();
// }

// int Invoker::getMember() {
//   return this->member;
// }

// void Invoker::setMember(int member) {
//   this->member = member;
// }

// void Invoker::defendAlliance(){
//   this->actions[0]->executeAction();
//   this->actionTracker.push_back(this->actions[0]);
// }

// void Invoker::hold(){
//   this->actions[1]->executeAction();
//   this->actionTracker.push_back(this->actions[1]);
// }

// void Invoker::surrender(){
//   this->actions[2]->executeAction();
//   this->actionTracker.push_back(this->actions[2]);
// }

// void Invoker::requestAlly(){
//   this->actions[3]->executeAction();
//   this->actionTracker.push_back(this->actions[3]);
// }

// void Invoker::attackEnemyAlliance(){
//   this->actions[4]->executeAction();
//   this->actionTracker.push_back(this->actions[4]);
// }

// void Invoker::nextAction(int action)
// {
//   this->nextaction = action;
// }

// int Invoker::getNextAction()
// {
//   return this->nextaction;
// }

// void Invoker::setBattleActions(Battle * battle)
// {
//   this->actions.push_back(new Defend(battle, playerNumber)); // Index 0 = Defend Action
//   this->actions.push_back(new Hold(battle, playerNumber)); // Index 1 = Hold Action
//   this->actions.push_back(new Surrender(battle, playerNumber)); // Index 2 = Surrender Action
//   this->actions.push_back(new AllyAction(battle, playerNumber)); // Index 3 = AllyAction Action
//   this->actions.push_back(new Attack(battle, playerNumber)); // Index 4 = Attack Action
// }