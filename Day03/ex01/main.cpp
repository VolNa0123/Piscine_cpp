#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Alisa");
    ScavTrap scavtrap("Bob");

    std::cout << "Alisa Has " << claptrap.getHit() << " hit_points" << std::endl;
    std::cout << "Alisa Has " << claptrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Alisa Has " << claptrap.getAttack() << " attack_points" << std::endl;
    std::cout << "Bob Has " << scavtrap.getHit() << " hit_points" << std::endl;
    std::cout << "Bob Has " << scavtrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Bob Has " << scavtrap.getAttack() << " attack_points" << std::endl;

    claptrap.attack("Can");
    claptrap.takeDamage(20);
    claptrap.beRepaired(10);

    scavtrap.attack("Dave");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    return (0);
}