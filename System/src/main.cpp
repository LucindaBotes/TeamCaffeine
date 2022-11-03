#include <iostream>
#include <string>
#include "gtest/gtest.h"

TEST(SquareRootTest, PositiveNos) {
  EXPECT_EQ(1, 1);
}

int main(int argc, char **argv) {

  // if the test flag is set, run the tests and exit
  if (argc > 1 && std::string(argv[1]) == "--test") {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
  }

  return 0;
}
