//#include "../include/ArmyUnit.h"
#include <iostream>
#include "../include/ArmyUnit.h"
#include "../include/InfantryCreature.h"

void InfantryCreature::info() {
    std::cout << "Infantry creature" << std::endl;
}

InfantryCreature::InfantryCreature() : ArmyUnit(UnitType::eInfantryCreature) {
    _health = INFANTRY_INITIAL_HEALTH;
    _strength = power;
}