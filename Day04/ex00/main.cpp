#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    Animal animal;

    std::cout << "type " << dog->getType() << " . " << std::endl;
    std::cout << "type " << cat->getType() << " . " << std::endl;
    std::cout << "type " << meta->getType() << " . " << std::endl;
    std::cout << "type " << animal.getType() << " . " << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();
    animal.makeSound();

    delete meta;
    delete dog;
    delete cat;

    const WrongAnimal* wrongcat = new WrongCat();
    wrongcat->makeSound();
    delete wrongcat;

    return 0;
}