#ifndef STATISTICS_H
#define STATISTICS_H

#include "GDP.h"
#include "Randomizer.h"


class Statistics {
  private:
    double _health;
    double _damage;
    double _defence;
    GDP* _gdp;

  public:
    Statistics();
    Statistics(double, double, double, GDP*);
    ~Statistics();

    double getHealth();
    double getDamage();
    double getDefence();
    GDP* getGDP();
    void generateStats();
    void setHealth(double);
    void setDamage(double);
    void setDefence(double);
    void setGDP(double);
};

#endif
