#include "../include/ArmyUnit.h"
#include "../include/ManKing.h"
#include <iostream>


void ManKing::info() {
    std::cout << "The King of People" << std::endl;
}


ManKing::ManKing() : ArmyUnit(UnitType::eManKing) {
    _health = MAN_KING_INITIAL_HEALTH;
    _strength = power;
}
