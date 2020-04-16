#ifndef Eagle_
#define Eagle_
#include "ArmyUnit.h"

class Eagle : public ArmyUnit {
public:
    Eagle() ;
    virtual void info() override;
private:
    static constexpr int harm = 50;
};

#endif