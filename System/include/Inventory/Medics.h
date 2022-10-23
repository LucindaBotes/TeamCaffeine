#ifndef MEDICS_H
#define MEDICS_H

#include <Inventory/Entity.h>

class Medics : public Entity {
  private:
    double _heal;

  public:
    Medics();
    Medics(double);
    Medics(const Medics &m);
    virtual ~Medics() override;

    Entity* clone() override;
    void addEntity(Entity* e) override;

    double getHeal() const;
    void setHeal(double heal);
};

#endif
