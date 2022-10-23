#ifndef CREATEMEDICS_H
#define CREATEMEDICS_H

#include <Inventory/MedicNode.h>
#include <Inventory/MedicsIterator.h>
#include <Inventory/EntityCreator.h>

class CreateMedics : public EntityCreator {
  private:
    int member;

  public:
    CreateMedics();
    ~CreateMedics();
    MedicNode * createMedicsEntity();
    MedicsIterator<Medics> * createMedicsIterator();
};

#endif
