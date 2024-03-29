#include "../include/Army.h"


void Army::pushUnit(ArmyUnit* unit) {
    _units.push_back(ArmyUnitPtr(unit));
}

const std::vector<ArmyUnitPtr>& Army::getUnits() const {
    return _units;
}

Army::Army(ArmyType type) : _type(type) {}

ArmyType Army::getType() const {
    return _type;
}

ArmyType Army::getAmount() const{
    return _amount;
}

std::string Army::getInfo() const {
    return ArmiesInfo[getType()];
}
