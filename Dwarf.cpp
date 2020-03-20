#include "Dwarf.h"
#include "Character.h"
#include "Utility.h"

Dwarf::Dwarf(std::string name_, int hp, int armor) : Character ( hp, armor, 4 )
{
    name = name_;
    helpfulItems = makeHelpfulItems( 1 );
    defensiveItems = makeDefensiveItems( 3 );
}

//Dwarf::getName

//Dwarf::getStats