#ifndef STATISTICS_H
#define STATISTICS_H

#include "GDP.h"

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

    double getHealth() const;
    double getDamage() const;
    double getDefence() const;
    GDP getGDP() const;

    void setHealth(double);
    void setDamage(double);
    void setDefence(double);
    
};

#endif
