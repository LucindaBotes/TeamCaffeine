#ifndef WEAPONSDECORATOR_H
#define WEAPONSDECORATOR_H

#include <Inventory/EntityDecorator.h>

class WeaponsDecorator : public EntityDecorator
{
    public:
        WeaponsDecorator();
        WeaponsDecorator(const WeaponsDecorator& wd);
        ~WeaponsDecorator();
        virtual Entity* clone() override;
        //TODO: Implement decorator specific functions below:
};

#endif