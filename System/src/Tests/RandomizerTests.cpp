#include <gtest/gtest.h> // ! Google Test Framework which cmake gets... ignore error
#include "Randomizer.h"
namespace {

    TEST(RandomizerTest, CreationTest) {
        Randomizer* randomizer = new Randomizer();
        EXPECT_EQ(randomizer == nullptr, false);

        delete randomizer;
    }

    TEST(RandomizerTest, Get_Random_Uniform_Number_Test) {
        Randomizer* randomizer = new Randomizer();
        double randomNum = randomizer->getUniformRandomNumber(10, 25);
        EXPECT_EQ(randomNum >= 10 && randomNum <= 25, true);

        delete randomizer;
    }

}