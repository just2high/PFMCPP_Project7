#pragma once
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hp, int armor);
    ~DragonSlayer () override;

    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;

    int helpfulItems;
    int defensiveItems;

    AttackItem dragonSword;

private:
    const std::string name;
};
