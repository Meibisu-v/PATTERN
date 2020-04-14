#include "../include/ArmyUnit.h"
#include "../include/Catapult.h"
#include <iostream>

void Catapult::info() {
    std::cout << "Catapult" << std::endl;
}


Catapult::Catapult() : ArmyUnit(UnitType::eCatapult) {
    _health = CATAPULT_INITIAL_HEALTH;
    _strength = shot;
}
