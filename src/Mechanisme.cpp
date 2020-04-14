#include "../include/ArmyUnit.h"
#include "../include/Mechanisme.h"
#include <iostream>


void Mechanisme::info() {
    std::cout << "Mechanism" << std::endl;
}

Mechanisme::Mechanisme() : ArmyUnit(UnitType::eMechanisme) {
    _health = MECHANISME_INITIAL_HEALTH;
    _strength = power;
}