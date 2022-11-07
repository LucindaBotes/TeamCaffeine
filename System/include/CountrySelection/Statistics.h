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

    double _gdp_int;

  public:
    Statistics();
    Statistics(double, double, double, GDP*);
    ~Statistics();

    /*Added by Erik*/
    void copy(double, double, double, GDP*);
    Statistics* copy(Statistics*);
    Statistics* copy(double, double, double, double);
    /*Added by Erik*/

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
