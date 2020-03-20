#include "Paladin.h"
#include "Character.h"

Paladin::Paladin( std::string name_, int hp, int armor ) : Character ( hp, armor, 10 )
{
    name = name_;
}

// Paladin::getName

// Paladin::getStats