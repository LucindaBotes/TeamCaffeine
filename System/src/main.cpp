#include <iostream>
#include "Soldiers.h"

#include <gtest/gtest.h> // ! Google Test Framework which cmake gets... ignore error

static bool _runTests = false; // Change this to true to run tests

int runTests(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

int runApplication()
{
	Entity* soldiers = new Soldiers();
	soldiers->setPrice(10);
  std::cout << "Soldier price: " << soldiers->getPrice() << std::endl;
  return 0;
}

int main(int argc, char** argv)
{
	if(_runTests) return runTests(argc, argv);
	else return runApplication();
}
