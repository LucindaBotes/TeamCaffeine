#include <gtest/gtest.h>
#include "WarPhaseContext.h"

namespace
{
    TEST(WarPhaseTests, WarPhaseContext_Creation)
    {
        WarPhaseContext* s = new WarPhaseContext();
        EXPECT_EQ(s == nullptr, false);

        delete s; 
    } 

    TEST(WarPhaseTests, ColdState_Creation)
    {
        ColdState* s = new ColdState();
        EXPECT_EQ("Peaceful", s->getState()); //update

        delete s; 
    } 

    TEST(WarPhaseTests, Peaceful_Creation)
    {
        PeacefulState* s = new PeacefulState();
        EXPECT_EQ("Peaceful", s->getState()); //update

        delete s; 
    } 

}