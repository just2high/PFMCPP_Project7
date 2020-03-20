#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon(std::string name_, int hp, int armor) : Character ( hp, armor, 80 );
    ~Dragon() : Character() override;

    const std::string& getname() override;
    std::string getStats() override;

    void attack(Character& other) override;

private:
    const std::string name;
   
};
