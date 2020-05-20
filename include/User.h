#ifndef INC_1_TASK_PATTERN_USER_H
#define INC_1_TASK_PATTERN_USER_H

#include <memory>
#include <utility>
#include "Side.h"
#include "Army.h"

class User;
typedef std::shared_ptr<User> UserPtr;

class User {
public:

    explicit User();

    void setName(const std::string& name);
    const std::string& getName() const;

    void setSide(Side side);
    Side getSide() const;

    int turnWhite(ArmyType ty, int round, int rn, std::string type);
    int turnDark(ArmyType ty, int round, int rn, std::string type);
    int check(ArmyType, int RING, int ans);
    std::pair<int, std::string> eagleHelp(ArmyType ty, int round);
    std::pair<int, std::string> harmless(ArmyType ty, int round);

    void addArmy(ArmyPtr armyPtr);
    const std::vector<ArmyPtr>& getArmies() const;

private:
    std::vector<ArmyPtr> _armies;

    std::string _userName;
    Side _side;
};



#endif //INC_1_TASK_PATTERN_USER_H
