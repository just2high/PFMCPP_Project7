#include "DragonSlayer.h"
#include "Dragon.h"
#include "Character.h"
#include "Utility.h"

DragonSlayer::DragonSlayer (std::string name_, int hp, int armor) : Character ( hp, armor, 4 )
{
    name = name_;
    helpfulItems = makeHelpfulItems( 2 );
    defensiveItems = makeDefensiveItems( 4 );
}

//DragonSlayer::getName

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //assert(false);
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //

        attackDamage *= dragonSword.getBoost();
        
        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

//DragonSlayer::getStats