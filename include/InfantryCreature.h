#ifndef InfantryCreature_
#define InfantryCreature_
#include "ArmyUnit.h"

class InfantryCreature : public ArmyUnit {
public:

    static constexpr int INFANTRY_INITIAL_HEALTH = 30;
    InfantryCreature();
    virtual void info() override;
private:
    static constexpr int power = 20;
};

#endif