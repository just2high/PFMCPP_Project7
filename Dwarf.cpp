#include "Dwarf.h"
#include "Character.h"
#include "Utility.h"

Dwarf::Dwarf(std::string name_, int hp, int armor) : Character ( hp, armor, 4 ), name( name_ )
{
    std::cout << getName() << std::endl;
    helpfulItems = makeHelpfulItems( rand() % 2 );
    defensiveItems = makeDefensiveItems( rand() % 4 );
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
