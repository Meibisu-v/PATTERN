#include "gtest/gtest.h"
#include "include/ArmyUnit.h"
#include <limits>

//Archer t;

TEST(Unit, UnitConstr){
    ASSERT_NO_THROW(Archer());
    ASSERT_NO_THROW(InfantryCreature());
    ASSERT_NO_THROW(WargRider());
    ASSERT_NO_THROW(Eagle());
    ASSERT_NO_THROW(DeadSoul());
    ASSERT_NO_THROW(ManKing());
    ASSERT_NO_THROW(Krebain());
    ASSERT_NO_THROW(Nazgul());
    ASSERT_NO_THROW(GiantWorm());
    ASSERT_NO_THROW(Catapult());
    ASSERT_NO_THROW(Mechanisme());
    ASSERT_NO_THROW(UrugHai());
}

TEST(Unit, UnitHealth){
    ASSERT_TRUE(Archer().getHealth() == 40);
    ASSERT_TRUE(InfantryCreature().getHealth() == 30);
    ASSERT_TRUE(WargRider().getHealth() == 50);
    ASSERT_TRUE(DeadSoul().getHealth() == numeric_limits<int>::max());
    ASSERT_TRUE(ManKing().getHealth() == 40);
    ASSERT_TRUE(GiantWorm().getHealth() == 300);
    ASSERT_TRUE(Catapult().getHealth() == 20);
    ASSERT_TRUE(Mechanisme().getHealth() == 20);
    ASSERT_TRUE(UrugHai().getHealth() == 40);
}

TEST(Unit, UnitInfo){
    ASSERT_TRUE("Archer" == Archer().name());
    ASSERT_TRUE(InfantryCreature().name() == "Infantry creature");
    ASSERT_TRUE(WargRider().name() == "Warg rider");
    ASSERT_TRUE(Eagle().name() == "Eagle");
    ASSERT_TRUE(DeadSoul().name() == "Dead soul");
    ASSERT_TRUE(ManKing().name() == "ManKing");
    ASSERT_TRUE(Krebain().name() == "Krebain");
    ASSERT_TRUE(Nazgul().name() == "Nazgul");
    ASSERT_TRUE(GiantWorm().name() == "Giant worm");
    ASSERT_TRUE(Catapult().name() == "Catapult");
    ASSERT_TRUE(Mechanisme().name() == "Mechanisme");
    ASSERT_TRUE(UrugHai().name() == "Urug hai");
}


int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}