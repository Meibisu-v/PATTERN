#include "../include/ArmyUnit.h"
#include "../include/UrugHai.h"
#include <iostream>

void UrugHai::info() {
    std::cout << "Urug-Hai" << std::endl;
}


UrugHai::UrugHai() : ArmyUnit(UnitType::eUrugHai) {
    _health = URUGHAI_INITIAL_HEALTH;
    _strength = power;
}