#ifndef WargRider_
#define WargRider_
#include "ArmyUnit.h"

class WargRider : public ArmyUnit {
public:
    static constexpr int WARGRIDER_INITIAL_HEALTH = 50;
    WargRider();
    void info() override;
private:
    static constexpr int power = 50;
};

#endif