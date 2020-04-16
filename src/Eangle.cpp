#include "../include/ArmyUnit.h"
#include "../include/Eagle.h"
#include <iostream>

void Eagle::info() {
    std::cout << "Eagle" << std::endl;
}


Eagle::Eagle() : ArmyUnit(UnitType::eEagle) {
    _strength = harm;
}