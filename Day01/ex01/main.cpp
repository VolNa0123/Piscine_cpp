#include "Zombie.hpp"

int main(void){
	int hordNum = 6;
	Zombie *hord = zombieHorde(hordNum, "Alisa");
	if (hord != NULL)
		delete [] hord;
}