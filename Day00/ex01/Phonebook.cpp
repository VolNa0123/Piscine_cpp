#include "Phonebook.hpp"

Phonebook::Phonebook() {}

Phonebook::~Phonebook() {}

void	printHeader()
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "firs name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;	
}

void	Phonebook::addContact(int index)
{
	this->contact[index].setContact();
}

void	Phonebook::searchContact()
{
	int	index = -1;

	printHeader();
	for (int i = 0; i < 8; i++)
		this->contact[i].getContact(i);
	std::cout << "enter index to search : ";
	while (1)
	{
		std::cin >> index;
		std::cin.ignore(32767, '\n');
		if (index > 0 && index < 9)
		{
			this->contact[index - 1].displayContact();
			break ;
		}
		std::cin.clear();
		std::cout << "invalid index. Enter index to search : ";
	}
	std::cin.clear();
}