#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "new Zombie has been created" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}

void Zombie::announce( void ){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}