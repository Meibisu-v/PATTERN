#ifndef UrugHai_
#define UrugHai_
#include "ArmyUnit.h"

class UrugHai : public ArmyUnit {
public:
    static constexpr int URUGHAI_INITIAL_HEALTH = 40;
    UrugHai();
    virtual void info() override ;
private:
    static constexpr int power = 60;
};

#endif