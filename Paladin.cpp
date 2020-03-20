#include "Paladin.h"
#include "Character.h"
#include "Utility.h"

Paladin::Paladin( std::string name_, int hp, int armor ) : Character ( hp, armor, 10 )
{
    name = name_;
    helpfulItems = makeHelpfulItems( 3 );
    defensiveItems = makeDefensiveItems( 2 );
}

// Paladin::getName

// Paladin::getStats