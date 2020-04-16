#ifndef Mechanisme_
#define Mechanisme_
#include "ArmyUnit.h"

class Mechanisme : public ArmyUnit
{
public:
    static constexpr int MECHANISME_INITIAL_HEALTH = 20;
    Mechanisme();
    virtual void info();
private:
    static constexpr int power = 40;
};

#endif