#ifndef ManKing_
#define ManKing_
#include "ArmyUnit.h"

class ManKing : public ArmyUnit {
public:
    static constexpr int MAN_KING_INITIAL_HEALTH = 40;
    ManKing() ;
    virtual void info() ;
private:
    static constexpr int power = 40;
};

#endif