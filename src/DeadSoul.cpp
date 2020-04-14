#include "../include/ArmyUnit.h"
#include "../include/DeadSoul.h"
#include <iostream>

void DeadSoul::info() {
    std::cout << "Dead Souls" << std::endl;
}


DeadSoul::DeadSoul() : ArmyUnit(UnitType::eDeadSoul) {
    _health = DEAD_SOUL_INITIAL_HEALTH;
    _strength = power;
}