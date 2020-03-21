#include "Paladin.h"
#include "Character.h"
#include "Utility.h"

Paladin::Paladin( std::string name_, int hp, int armor ) : Character ( hp, armor, 10 ), name( name_ )
{
    helpfulItems = makeHelpfulItems( rand() % 6 );
    defensiveItems = makeDefensiveItems( rand() % 6 );
}

Paladin::~Paladin() {}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}

void Paladin::attack( Character& other )
{
    std::cout << getName() << " is attacking " << other.getName() << "!\n";
    Character::attack( other );
}
