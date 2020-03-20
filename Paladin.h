#pragma once
#include "Character.h"

struct Paladin : Character
{
    Paladin(std::string name_, int hp, int armor);
    ~Paladin() override;

    const std::string& getName() override;
    std::string getStats() override;
    
    void attack( Character& other ) override;

    int helpfulItems;
    int defensiveItems;

private:
    const std::string name;
};
