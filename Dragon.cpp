#include "Dragon.h"
#include "DragonSlayer.h"
#include "Character.h"

Dragon::Dragon (std::string name_, int hp, int armor) : Character ( hp, armor, 80 )
{   
    name = name_;
}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

//Dragon::getName

//Dragon::getStats