#ifndef Krebain_
#define Krebain_

#include "ArmyUnit.h"

class Krebain : public ArmyUnit {
public:
    Krebain();
    virtual void info();
private:
    static constexpr int harm = 50;
};

#endif