#ifndef GiantWorm_
#define GiantWorm_
#include "ArmyUnit.h"

class GiantWorm : public ArmyUnit {
public:
    static constexpr int GIANT_WORM_INITIAL_HEALTH = 300;
    GiantWorm();
    virtual void info() override ;
private:
    static constexpr int power = 200;
};

#endif