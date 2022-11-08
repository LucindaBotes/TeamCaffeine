#include <gtest/gtest.h>
#include "WarPhaseContext.h"

namespace
{
    TEST(WarPhaseTests, War_Creation)
    {
        War* s = new War();
        EXPECT_EQ(s == nullptr, true);

        delete s; 
    } 

}