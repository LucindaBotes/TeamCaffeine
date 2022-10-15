#ifndef STATISTICSNOTIFIER_H
#define STATISTICSNOTIFIER_H

class StatisticsNotifier {
  private:
    int member;

  public:
    StatisticsNotifier();
    ~StatisticsNotifier();
    int getMember();
    void setMember(int);
};

#endif
