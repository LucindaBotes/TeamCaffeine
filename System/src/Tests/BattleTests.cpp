#include <gtest/gtest.h> // ! Google Test Framework which cmake gets... ignore error
#include "Battle.h"

namespace {

    TEST(BattleTest, CreationTest) {
        Battle* battle = new Armour();
        EXPECT_EQ(battle == nullptr, false);

        delete battle;
    }
    
	TEST(BattleTest, SetnGET_MemberTest) {
        Battle* battle = new Battle();
        battle->setMember(38);
        EXPECT_EQ(battle->getMember(), 38);

        delete battle;
    }
}