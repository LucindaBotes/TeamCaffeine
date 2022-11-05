#include <ObserverPattern/Randomizer.h>
#include <cmath>
#include <cstdlib>

/**
 * @file Randomizer.h
 * @brief Radnomizer class implementation to serve as a general random class for certain classes in need of randomization
 * 
 * @author Ruan Tristan Carlinsky ; u20416823
 */

/**
 * @brief Construct a new Randomizer object
 * 
 */
Randomizer::Randomizer() {
}

/**
 * @brief method to get a random boolean true or false with uniform distribution(50% chance of true and 50% chance of false) 
 * 
 * @return true 
 * @return false 
 */
bool Randomizer::getRandomBoolean()
{
    static const int shift = static_cast<int>(std::log2(RAND_MAX));
    return (rand() >> shift) & 1;
}

/**
 * @brief method to get a random integer between the [1 and max values]
 * 
 * @param maxValue 
 * @return int 
 */
int Randomizer::getRandomInt(int maxValue)
{
    srand(time(0));
    return (rand() % maxValue) + 1;
}