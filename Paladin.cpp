#include "Paladin.h"
#include "Character.h"
#include "Utility.h"

Paladin::Paladin( std::string name_, int hp, int armor ) : Character ( hp, armor, 10 ), name( name_ )
{
    std::cout << getName() << std::endl;
    helpfulItems = makeHelpfulItems( rand() % 6 );
    defensiveItems = makeDefensiveItems( rand() % 6 );
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
