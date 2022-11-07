// //#include <gtest/gtest.h> // ! Google Test Framework which cmake gets... ignore error
// #include "Armour.h"
// #include "Medics.h"
// #include "Soldiers.h"
// #include "Supplies.h"
// #include "Weapons.h"

// namespace {

//     TEST(ArmourTest, CreationTest) {
//         Entity* armour = new Armour();
//         EXPECT_EQ(armour == nullptr, false);

//         delete armour;
//     }
    
// 	TEST(ArmourTest, SetnGET_PriceTest) {
//         Entity* armour = new Armour();
//         armour->setPrice(10);
//         EXPECT_EQ(armour->getPrice(), 10);

//         delete armour;
//     }

//     TEST(ArmourTest, TypeTest) {
//         Entity* armour = new Armour();
//         EXPECT_EQ(armour->getType(), EntityType::ARMOUR);

//         delete armour;
//     }

//     TEST(MedicsTest, CreationTest) {
//         Entity* medics = new Medics();
//         EXPECT_EQ(medics == nullptr, false);

//         delete medics;
//     }
    
// 	TEST(MedicsTest, SetnGET_PriceTest) {
//         Entity* medics = new Medics();
//         medics->setPrice(10);
//         EXPECT_EQ(medics->getPrice(), 10);

//         delete medics;
//     }

//     TEST(MedicsTest, TypeTest) {
//         Entity* medics = new Medics();
//         EXPECT_EQ(medics->getType(), EntityType::MEDIC);

//         delete medics;
//     }

//     TEST(SoldiersTest, CreationTest) {
//         Entity* soldiers = new Soldiers();
//         EXPECT_EQ(soldiers == nullptr, false);

//         delete soldiers;
//     }

//     TEST(SoldiersTest, SetnGET_PriceTest) {
//         Entity* soldiers = new Soldiers();
//         soldiers->setPrice(10);
//         EXPECT_EQ(soldiers->getPrice(), 10);

//         delete soldiers;
//     }

//     TEST(SoldiersTest, TypeTest) {
//         Entity* soldiers = new Soldiers();
//         EXPECT_EQ(soldiers->getType(), EntityType::SOLDIER);

//         delete soldiers;
//     }

//     TEST(SuppliesTest, CreationTest) {
//         Entity* supplies = new Supplies();
//         EXPECT_EQ(supplies == nullptr, false);

//         delete supplies;
//     }

//     TEST(SuppliesTest, SetnGET_PriceTest) {
//         Entity* supplies = new Supplies();
//         supplies->setPrice(10);
//         EXPECT_EQ(supplies->getPrice(), 10);

//         delete supplies;
//     }

//     TEST(SuppliesTest, TypeTest) {
//         Entity* supplies = new Supplies();
//         EXPECT_EQ(supplies->getType(), EntityType::SUPPLIES);

//         delete supplies;
//     }

//     TEST(WeaponsTest, CreationTest) {
//         Entity* weapons = new Weapons();
//         EXPECT_EQ(weapons == nullptr, false);

//         delete weapons;
//     }

//     TEST(WeaponsTest, SetnGET_PriceTest) {
//         Entity* weapons = new Weapons();
//         weapons->setPrice(10);
//         EXPECT_EQ(weapons->getPrice(), 10);

//         delete weapons;
//     }

//     TEST(WeaponsTest, TypeTest) {
//         Entity* weapons = new Weapons();
//         EXPECT_EQ(weapons->getType(), EntityType::WEAPON);

//         delete weapons;
//     }
// }