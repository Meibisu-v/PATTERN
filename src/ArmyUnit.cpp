#include "../include/ArmyUnit.h"

UnitTypeToStringMap UnitTypesStrings = {
        { UnitType::eGiantWorm, "Giant worm" },
        { UnitType::eNazgul, "Nazgul" },
        { UnitType::eKrebain, "Krebain" },
        { UnitType::eManKing, "ManKing" },
        { UnitType::eMechanisme, "Mechanisme" },
        { UnitType::eEagle, "Eagle" },
        { UnitType::eDeadSoul, "Dead soul" },
        { UnitType::eUrugHai, "Urug hai" },
        { UnitType::eInfantryCreature, "Infantry creature" },
        { UnitType::eArcher, "Archer" },
        { UnitType::eWargRider, "Warg rider" },
        { UnitType::eCatapult, "Catapult" },
        { UnitType::eLastArmyUnitType, "Undefined" }
};

ArmyUnit::ArmyUnit(UnitType type) : _type(type) {}


UnitType ArmyUnit::getType(UnitType type) {
    return _type;
}

const char* ArmyUnit::name() const {
    return UnitTypesStrings[_type];
}

