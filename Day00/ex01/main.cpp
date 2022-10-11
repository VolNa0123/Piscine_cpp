#include "Phonebook.hpp"

int main()
{
	int			index = 0;
	Phonebook	book;
	std::string	command;
	while (command.compare("EXIT") != 0)
	{
		std::cout << "Enter your command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
		{
			book.addContact(index % 8);
			index++;
		}
		else if (command.compare("SEARCH") == 0)
			book.searchContact();
		else if (command.compare("EXIT") != 0)
			std::cout << "Please enter: ADD, SEARCH or EXIT" << std::endl;
		std::cin.clear();
	}
	return (0);
}