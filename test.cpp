#include "gtest/gtest.h"
#include "include/ArmyUnit.h"
#include <limits>
#include "include/InfantryCreature.h"
#include "include/Archer.h"
#include "include/WargRider.h"
#include "include/Catapult.h"
#include "include/UrugHai.h"
#include "include/Mechanisme.h"
#include "include/GiantWorm.h"
#include "include/Nazgul.h"
#include "include/Krebain.h"
#include "include/Eagle.h"
#include "include/DeadSoul.h"
#include "include/Mechanisme.h"
#include "include/ManKing.h"
#include "include/Army.h"
#include "include/ArmyBuilder.h"
#include "include/ArmyFactory.h"
#include "include/Side.h"
#include "include/User.h"
#include <iostream>

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
    ASSERT_TRUE(DeadSoul().getHealth() == std::numeric_limits<int>::max());
    ASSERT_TRUE(ManKing().getHealth() == 40);
    ASSERT_TRUE(GiantWorm().getHealth() == 300);
    ASSERT_TRUE(Catapult().getHealth() == 20);
    ASSERT_TRUE(Mechanisme().getHealth() == 20);
    ASSERT_TRUE(UrugHai().getHealth() == 40);
}

TEST(Unit, UnitInfo){
    ASSERT_STREQ(Archer().name(), "Archer");
    ASSERT_STREQ(InfantryCreature().name(), "Infantry creature");
    ASSERT_STREQ(WargRider().name(), "Warg rider");
    ASSERT_STREQ(Eagle().name(), "Eagle");
    ASSERT_STREQ(DeadSoul().name(), "Dead soul");
    ASSERT_STREQ(ManKing().name(),  "ManKing");
    ASSERT_STREQ(Krebain().name(), "Krebain");
    ASSERT_STREQ(Nazgul().name(), "Nazgul");
    ASSERT_STREQ(GiantWorm().name(), "Giant worm");
    ASSERT_STREQ(Catapult().name(), "Catapult");
    ASSERT_STREQ(Mechanisme().name(), "Mechanisme");
    ASSERT_STREQ(UrugHai().name(), "Urug hai");
}

TEST(Army, ArmyBuild){    
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eGiantWormArmy).buildGiantWorm());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eNazgulArmy).buildNazgul());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eKrebainArmy).buildKrebain());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eOrcArmy).buildArcher());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eMankingArmy).buildMechanisme());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eEagle).buildEagle());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eDeadSoulArmy).buildDeadSoul());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eGoblinArmy).buildInfantryCreature());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eElfArmy).buildArcher());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eDwarfArmy).buildArcher());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eMankingArmy).buildMechanisme());
    ASSERT_NO_THROW(ArmyBuilder(ArmyType::eMankingArmy).buildManKing());
}
TEST(Army, ArmyCreate){
    ASSERT_NO_THROW(ArmyFactory().createMankingArmy());
    ASSERT_NO_THROW(ArmyFactory().createGoblinArmy());
    ASSERT_NO_THROW(ArmyFactory().createGiantWorm());
    ASSERT_NO_THROW(ArmyFactory().createNazgul());
    ASSERT_NO_THROW(ArmyFactory().createKrebain());
    ASSERT_NO_THROW(ArmyFactory().createElfArmy());
    ASSERT_NO_THROW(ArmyFactory().createDwarfArmy());
    ASSERT_NO_THROW(ArmyFactory().createEagle());
    ASSERT_NO_THROW(ArmyFactory().createDeadSoul());  

}

TEST(User, UserInfo){
    User _user1;
    ASSERT_NO_THROW(_user1.setSide(Side(1)));
    ASSERT_EQ(_user1.getSide(), Side(1));
    ASSERT_NO_THROW(_user1.setSide(Side(2)));
    ASSERT_EQ(_user1.getSide(), Side(2));
    ASSERT_NO_THROW(_user1.setName("player1"));
}

TEST(User, UserArmy){
    User _user1;
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createOrcArmy()));
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createOrcArmy()));
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createGiantWorm()));
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createGoblinArmy()));
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createKrebain()));
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createNazgul()));

    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createMankingArmy()));
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createDwarfArmy()));
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createEagle()));
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createElfArmy()));
    ASSERT_NO_THROW(_user1.addArmy(ArmyFactory::createDeadSoul()));
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}