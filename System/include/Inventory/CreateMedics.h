#ifndef CREATEMEDICS_H
#define CREATEMEDICS_H

#include "Medics.h"
#include "EntityCreator.h"

class CreateMedics : public EntityCreator {
  private:
    int member;

  public:
    CreateMedics();
    ~CreateMedics();
    Medics * createEntity() override;
};

#endif
