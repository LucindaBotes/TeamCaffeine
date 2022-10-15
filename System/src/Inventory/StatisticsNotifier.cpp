#include <Inventory/StatisticsNotifier.h>

using namespace std;

StatisticsNotifier::StatisticsNotifier() {
}

StatisticsNotifier::~StatisticsNotifier() {
}

int StatisticsNotifier::getMember() {
  return this->member;
}

void StatisticsNotifier::setMember(int member) {
  this->member = member;
}
