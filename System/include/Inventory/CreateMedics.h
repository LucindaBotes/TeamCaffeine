#ifndef CREATEMEDICS_H
#define CREATEMEDICS_H

#include <Inventory/Medics.h>
#include <Inventory/EntityCreator.h>

class CreateMedics : public EntityCreator {
  private:
    int member;

  public:
    CreateMedics();
    ~CreateMedics();
    Medics * createMedicsEntity();
};

#endif
