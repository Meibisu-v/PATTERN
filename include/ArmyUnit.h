#ifndef PATTERN_ARMYUNIT_H
#define PATTERN_ARMYUNIT_H

#include <memory>
#include <limits>
#include <map>

enum class UnitType {
    eGiantWorm = 0,
    eNazgul,
    eKrebain,
    eManKing,
    eMechanisme,
    eEagle,
    eDeadSoul,
    eUrugHai,
    eInfantryCreature,
    eArcher,
    eWargRider,
    eCatapult,
    eLastArmyUnitType
};

using UnitTypeToStringMap = std::map<UnitType, const char*>;

using UnitTypeToIntMap = std::map<UnitType, int>;

class ArmyUnit {
public:
    ArmyUnit(UnitType type);

    virtual UnitType getType();

    virtual const char* name() const final;
    virtual void info() = 0;

    virtual int getHealth() {
        return _health;
    }
    virtual int getStrength() {
        return _strength;
    }

protected:
    UnitType _type;
    int _health;
    int _strength;
};

typedef std::shared_ptr<ArmyUnit> ArmyUnitPtr;

#endif //PATTERN_ARMYUNIT_H
