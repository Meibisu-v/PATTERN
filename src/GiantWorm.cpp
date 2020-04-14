#include "../include/ArmyUnit.h"
#include "../include/GiantWorm.h"
#include <iostream>

void GiantWorm::info() {
    std::cout << "Giant worm" << std::endl;
}

GiantWorm::GiantWorm() : ArmyUnit(UnitType::eGiantWorm) {
    _health = GIANT_WORM_INITIAL_HEALTH;
    _strength = power;
}