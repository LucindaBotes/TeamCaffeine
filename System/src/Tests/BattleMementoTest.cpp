#include <gtest/gtest.h>
#include "BattleMemento.h"

namespace
{
    TEST(BattleMementoTest, BattleMemento_Creation)
    {
        BattleMemento* b = new BattleMemento();
        EXPECT_EQ(b == nullptr, false);

        delete b;
    }

    TEST(BattleMementoTest, BattleMemento_Getters)
    {
        BattleMemento* b = new BattleMemento();
        EXPECT_EQ(b->getMemento() == nullptr, true);

        delete b;
    }

    TEST(BattleMementoTest, BattleMemento_Setters)
    {
        BattleMemento* b = new BattleMemento();
        EXPECT_EQ(b->setMemento(nullptr) == nullptr, true);

        delete b;
    }
}