#include "Zombie.hpp"

int main(){
	Zombie alisa = Zombie("Alisa");
	alisa.announce();
	Zombie *bob = newZombie("Bob");
	bob->announce();
	randomChump("Can");
	delete bob;
	return (0);
}