#include "../include/ArmyUnit.h"
#include "../include/Krebain.h"
#include <iostream>


void Krebain::info() {
    std::cout << "Krebain" << std::endl;
}

Krebain::Krebain() : ArmyUnit(UnitType::eKrebain) {
    _strength = harm;
}