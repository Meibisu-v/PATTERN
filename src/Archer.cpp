#include "../include/ArmyUnit.h"
#include "../include/Archer.h"
#include <iostream>

void Archer::info() {
    std::cout << "Archer" << std::endl;
}


Archer::Archer() : ArmyUnit(UnitType::eArcher) {
    _health = ARCHER_INITIAL_HEALTH;
    _strength = arrowNumber;
}
