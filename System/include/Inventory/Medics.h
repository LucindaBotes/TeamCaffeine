#ifndef MEDICS_H
#define MEDICS_H

#include <Inventory/EntityDecorator.h>

class Medics : public EntityDecorator {
  private:
    double _heal;

  public:
    Medics();
    Medics(double);
    Medics(const Medics &m);
    virtual ~Medics() override;

    Entity* clone() override;

    double getHeal() const;
    void setHeal(double heal);
};

#endif
