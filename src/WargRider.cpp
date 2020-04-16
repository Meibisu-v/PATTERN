#include "../include/ArmyUnit.h"
#include "../include/WargRider.h"
#include <iostream>


void WargRider::info() {
    std::cout << "WargRider" << std::endl;
}

WargRider::WargRider() : ArmyUnit(UnitType::eWargRider) {
    _health = WARGRIDER_INITIAL_HEALTH;
    _strength = power;
}
