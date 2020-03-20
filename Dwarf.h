#pragma once
#include "Character.h"

struct Dwarf : Character
{
    Dwarf( std::string name_, int hp, int armor );
    ~Dwarf() override;

    const std::string& getName() override;
    std::string getStats() override;
    
    void attack( Character& other ) override;

    int helpfulItems;
    int defensiveItems;

private:
    const std::string name;
};
