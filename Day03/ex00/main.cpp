#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Alisa");

    std::cout << "Has " << claptrap.getHit() << " hit_points" << std::endl;
    std::cout << "Has " << claptrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Has " << claptrap.getAttack() << " attack_points" << std::endl;

    claptrap.attack("Bob");
    claptrap.takeDamage(20);
    claptrap.beRepaired(10);

    std::cout << "Has " << claptrap.getHit() << " hit_points" << std::endl;
    std::cout << "Has " << claptrap.getEnergy() << " energy_points" << std::endl;
    std::cout << "Has " << claptrap.getAttack() << " attack_points" << std::endl;

    return (0);
}