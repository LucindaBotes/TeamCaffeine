// // #include <gtest/gtest.h> // ! Google Test Framework which cmake gets... ignore error
// #include "Country.h"
// #include "GDP.h"
// #include "Statistics.h"
// namespace {
//     TEST(CountrySelectionTests, GDP_Creation) {
//         GDP* gdp = new GDP();
//         EXPECT_EQ(gdp == nullptr, false);

//         delete gdp;
//     }

//     TEST(CountrySelectionTests, Statics_Creation) {
//         Statistics* s = new Statistics();
//         EXPECT_EQ(s == nullptr, false);

//         delete s;
//     }

//     TEST(CountrySelectionTests, Country_Creation) {
//         Country* country = new Country();
//         EXPECT_EQ(country == nullptr, false);

//         delete country;
//     }

//     TEST(CountrySelectionTests, GDP_Getters) {
//         GDP* gdp = new GDP();
//         EXPECT_EQ(gdp->getValue() >= 0, true);

//         delete gdp;
//     }

//     TEST(CountrySelectionTests, Statics_Getters) {
//         Statistics* s = new Statistics();
//         EXPECT_EQ(s->getHealth() >= 0, true);

//         delete s;
//     }

// }