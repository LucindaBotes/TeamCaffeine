#ifndef SOLDIERSDECORATOR_H
#define SOLDIERSDECORATOR_H

#include <Inventory/EntityDecorator.h>

class SoldiersDecorator : public EntityDecorator
{
    public:
        SoldiersDecorator();
        SoldiersDecorator(const SoldiersDecorator& sd);
        ~SoldiersDecorator();
        virtual Entity* clone() override;
        //TODO: Implement decorator specific functions below:

};

#endif