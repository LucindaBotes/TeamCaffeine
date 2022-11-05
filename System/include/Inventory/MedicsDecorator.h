#ifndef MEDICSDECORATOR_H
#define MEDICSDECORATOR_H

#include <Inventory/EntityDecorator.h>

class MedicsDecorator : public EntityDecorator
{
    public:
        MedicsDecorator();
        MedicsDecorator(const MedicsDecorator& md);
        ~MedicsDecorator();
        virtual Entity* clone() override;
};

#endif