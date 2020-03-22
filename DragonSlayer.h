#pragma once
#include "Character.h"
#include "AttackItem.h"
#include <memory>

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hp, int armor);

    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;

private:
    std::unique_ptr<AttackItem> dragonSword { new AttackItem() };   
    const std::string name;
};
