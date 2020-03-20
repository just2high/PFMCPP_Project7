#include "Dwarf.h"
#include "Character.h"

Dwarf::Dwarf(std::string name_, int hp, int armor) : Character ( hp, armor, 4 )
{
    name = name_;
}

//Dwarf::getName

//Dwarf::getStats