#ifndef MEDICS_H
#define MEDICS_H

#include <Inventory/Entity.h>

class Medics : public Entity {
  private:
    double _heal;

  public:
    Medics();
    Medics(const Medics &m);
    ~Medics() override;
    Entity* clone() = 0;

    double getHeal() const;
    void setHeal(double heal);
};

#endif
