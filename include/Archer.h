#ifndef Archer_
#define Archer_

#include "ArmyUnit.h"

class Archer : public ArmyUnit {
public:
    static constexpr int ARCHER_INITIAL_HEALTH = 40;
    Archer();
    virtual void info() override;
private:
    static constexpr int arrowNumber = 30;
};

#endif