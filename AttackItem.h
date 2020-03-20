#include "Item.h"

struct AttackItem : Item
{
    AttackItem() : Item("Attack item", 10) { }
    void use(Character* character) override;
}
