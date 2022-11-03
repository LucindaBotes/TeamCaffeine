#ifndef SUPPLIESDECORATOR_H
#define SUPPLIESDECORATOR_H

#include <Inventory/EntityDecorator.h>

class SuppliesDecorator : public EntityDecorator
{
    public:
        SuppliesDecorator();
        SuppliesDecorator(const SuppliesDecorator& sd);
        ~SuppliesDecorator();
        virtual Entity* clone() override;
        // TODO: Implement decorator specific functions below:
};

#endif