#include <gtest/gtest.h> // ! Google Test Framework which cmake gets... ignore error
#include "Randomizer.h"
namespace {

    TEST(RandomizerTest, CreationTest) {
        EXPECT_EQ(Randomizer::getInstance() == nullptr, false);
    }

    TEST(RandomizerTest, Get_Random_Uniform_Double_Number_Test) {
        double randomNum = Randomizer::getInstance()->getUniformRandomNumber(10, 25);
        EXPECT_EQ(randomNum > 0, true);
    }

    TEST(RandomizerTest, Get_Random_Uniform_Int_Number_Test) {
        int randomNum = Randomizer::getInstance()->getUniformRandomNumber(5, 10);
        EXPECT_EQ(randomNum > 0, true);
    }

    TEST(RandomizerTest, Get_Random_Int){
        int val = Randomizer::getInstance()->getRandomInt(10);
        EXPECT_EQ(val > 0, true);
    }

}