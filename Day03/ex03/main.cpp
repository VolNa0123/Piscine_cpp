#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main(void)
{
    ClapTrap claptrap("Alisa");
    ScavTrap scavtrap("Bob");
    FragTrap fragtrap("Fred");

    claptrap.attack("Can");
    claptrap.takeDamage(20);
    claptrap.beRepaired(10);

    scavtrap.attack("Dave");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    fragtrap.attack("Eva");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();

    std::cout << std::endl;

    DiamondTrap diamond("Harry");

    std::cout << "Harry Has " << diamond.getHit() << " hit_points" << std::endl;
    std::cout << "Harry Has " << diamond.getEnergy() << " energy_points" << std::endl;
    std::cout << "Harry Has " << diamond.getAttack() << " attack_points" << std::endl;
  
    diamond.getnameofClap();
    diamond.attack("Jeck");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    diamond.highFivesGuys();
    diamond.guardGate();
    diamond.whoAmI();

    return (0);
}