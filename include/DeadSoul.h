#ifndef DeadSoul_
#define DeadSoul_
#include "ArmyUnit.h"
#include <limits>

class DeadSoul : public ArmyUnit {
public:
    static constexpr int DEAD_SOUL_INITIAL_HEALTH = std::numeric_limits<int>::max();
    DeadSoul();
    virtual void info();
private:
    static constexpr int power = 40;
};

#endif