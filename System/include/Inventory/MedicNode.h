#ifndef MEDIC_NODE_H
#define MEDIC_NODE_H

#include <Inventory/Medics.h>

class MedicNode : public Medics {
  public:
    Medics medic;
    MedicNode *next;
    MedicNode *previous;
};

#endif