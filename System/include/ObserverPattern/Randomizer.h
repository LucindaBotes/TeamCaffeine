#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <ctime>
#include <cstdlib>

class Randomizer
{   
    public:
        Randomizer();
        bool getRandomBoolean();
        int getRandomInt(int);
};

#endif