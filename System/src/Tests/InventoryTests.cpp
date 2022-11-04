#include <gtest/gtest.h> // ! Google Test Framework which cmake gets... ignore error
#include "Armour.h"
namespace {

    TEST(ArmourTest, CreationTest) {
        Entity* armour = new Armour();
        EXPECT_EQ(armour == nullptr, true);

        delete armour;
    }
    
	TEST(ArmourTest, SetnGET_PriceTest) {
        Entity* armour = new Armour();
        armour->setPrice(10);
        EXPECT_EQ(armour->getPrice(), 10);

        delete armour;
    }

    TEST(ArmourTest, TypeTest) {
        Entity* armour = new Armour();
        EXPECT_EQ(armour->getType(), EntityType::ARMOUR);

        delete armour;
    }

}