#ifndef EQUIPMENTDECORATOR_H
#define EQUIPMENTDECORATOR_H

#include <Inventory/EntityDecorator.h>

class EquipmentDecorator : public EntityDecorator
{
    public:
        EquipmentDecorator();
        EquipmentDecorator(const EquipmentDecorator& ed);
        ~EquipmentDecorator();
        virtual Entity* clone() override;
        //TODO: Implement decorator specific functions below:

};

#endif