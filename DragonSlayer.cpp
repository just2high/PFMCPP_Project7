#include "DragonSlayer.h"
#include "Dragon.h"
#include "Character.h"
#include "Utility.h"

DragonSlayer::DragonSlayer (std::string name_, int hp, int armor) : Character ( hp, armor, 4 ), name( name_ )
{
    std::cout << getName() << std::endl;
    helpfulItems = makeHelpfulItems( rand() % 4 );
    defensiveItems = makeDefensiveItems( rand() % 3 );
}

const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //assert(false);
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //
        dragonSword->use(this);
        dragonSword.reset();

        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
        //reset attack damage after killing dragon
        attackDamage = getInitialAttackDamage();

        std::cout << getName() << "'s frenzy is over.  Damage returns to: " << attackDamage << std::endl;    
    }
        
    Character::attack(other);
        
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}
