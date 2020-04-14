#ifndef Catapult_
#define Catapult_

#include "ArmyUnit.h"

class Catapult : public ArmyUnit {
public:
    static constexpr int CATAPULT_INITIAL_HEALTH = 20;
    Catapult();
    virtual void info() override;
private:
    static constexpr int shot = 20;
};

#endif