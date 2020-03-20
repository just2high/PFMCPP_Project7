#pragma once
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hp, int armor) : Character ( hp, armor, int attackDamage = 4 );
    ~DragonSlayer : Character() override;

    const std::string& getname() override;
    std::string getStats() override;

    void attack(Character& other) override;

private:
    const std::string name;
};
