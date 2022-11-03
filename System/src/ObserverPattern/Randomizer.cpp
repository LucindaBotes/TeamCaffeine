#include <ObserverPattern/Randomizer.h>
#include <cmath>
#include <cstdlib>

bool Randomizer::getRandomBoolean()
{
    static const int shift = static_cast<int>(std::log2(RAND_MAX));
    return (rand() >> shift) & 1;
}

int Randomizer::getRandomInt(int maxValue)
{
    srand(time(0));
    return (rand() % maxValue) + 1;
}