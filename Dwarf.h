#pragma once
#include "Character.h"

struct Dwarf : Character
{
    Dwarf( std::string name_, int hp, int armor ) : Character ( hp, armor, int attackDamage = 4 );
    ~Dwarf() : Character () override;

    const std::string& getName() override;
    std::string getStats() override;
    
    void attack( Character& other ) override;

private:
    const std::string name;
};
