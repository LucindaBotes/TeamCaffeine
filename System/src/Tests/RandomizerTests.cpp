#include <gtest/gtest.h> // ! Google Test Framework which cmake gets... ignore error
#include "Randomizer.h"
namespace {

    TEST(RandomizerTest, CreationTest) {
        EXPECT_EQ(Randomizer::getInstance() == nullptr, false);
    }

    TEST(RandomizerTest, Get_Random_Uniform_Number_Test) {
        double randomNum = Randomizer::getInstance()->getUniformRandomNumber(10, 25);
        EXPECT_EQ(randomNum >= 10 && randomNum <= 25, true);
    }

}