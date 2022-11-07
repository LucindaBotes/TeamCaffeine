#include <iostream>
#include <string>
#include "gtest/gtest.h"

/**
 * Custom tests for Entity and subclasses.
*/

#include <Inventory/Weapons.h>
#include <Inventory/Supplies.h>
#include <Inventory/Medics.h>
#include <Inventory/Soldiers.h>
#include <Inventory/Equipment.h>

TEST(EntityTest, ValidEntityCreation)
{
  Medics* m = new Medics();
  EXPECT_NE(m, nullptr);

  Soldiers* s = new Soldiers();
  EXPECT_NE(s, nullptr);

  Supplies* su = new Supplies();
  EXPECT_NE(su, nullptr);

  Weapons* w = new Weapons();
  EXPECT_NE(w, nullptr);

  Equipment* e = new Equipment();
  EXPECT_NE(e, nullptr);

  delete m;
  delete s;
  delete su;
  delete w;
  delete e;
}

TEST(EntityTest, ValidEntitySetAndGet)
{
  Medics* m = new Medics();
  Soldiers* s = new Soldiers();
  Supplies* su = new Supplies();
  Weapons* w = new Weapons();
  Equipment* e = new Equipment();

  m->setHeal(10);
  EXPECT_EQ(m->getHeal(), 10);

  s->setDamage(10);
  EXPECT_EQ(s->getDamage(), 10.0);
  s->setArmour(20);
  EXPECT_EQ(s->getArmour(), 20.0);
  s->setCount(30);
  EXPECT_EQ(s->getCount(), 30);

  su->setHealth(10);
  EXPECT_EQ(su->getHealth(), 10.0);

  w->setDamage(10);
  EXPECT_EQ(w->getDamage(), 10.0);
  w->setArmour(20);
  EXPECT_EQ(w->getArmour(), 20.0);
  w->setVehicles(30);
  EXPECT_EQ(w->getDamage(), 30);

  e->getWeapons().push_back(w);
  EXPECT_EQ(e->getWeapons().size(), 1);

  e->getMedicine().push_back(m);
  EXPECT_EQ(e->getMedicine().size(), 1);

  e->getVehicles().push_back(w);
  EXPECT_EQ(e->getVehicles().size(), 1);

  delete m;
  delete s;
  delete su;
  delete w;
  delete e;
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}