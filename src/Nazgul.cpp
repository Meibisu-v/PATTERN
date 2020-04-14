#include "../include/ArmyUnit.h"
#include "../include/Nazgul.h"
#include <iostream>

void Nazgul::info() {
    std::cout << "Nazgul" << std::endl;
}


Nazgul::Nazgul() : ArmyUnit(UnitType::eNazgul) {
}