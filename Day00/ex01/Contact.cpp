# include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

// распечатывает выбранный контакт по индексу
void	Contact::displayContact()
{
	std::cout << "First name :     " << this->firstName << std::endl;
	std::cout << "Last name :      " << this->lastName << std::endl;
	std::cout << "Nickname :       " << this->nickname << std::endl;
	std::cout << "Phone number :   " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->darkestSecret << std::endl;
}

// последовательно вызывает функцию запроса для все х полей и записывает их в экземпляр класса
void	Contact::setContact()
{
	this->firstName = getField("enter First name");
	this->lastName = getField("enter Last name");
	this->nickname = getField("enter Nickname");
	this->phoneNumber = getField("enter Phone number");
	this->darkestSecret = getField("enter Darkest secret");
}

// запрашивает и возвращает вызывываемое поле контакта
std::string	Contact::getField(std::string field)
{
	std::string str;
	std::cout << field << " : ";
	while (std::getline(std::cin, str))
	{
		if (!str.empty())
			return (str) ;
		std::cout << "Error : field can not be empty" << std::endl;
		std::cout << field << " : ";
	}
	std::cerr << "error input filed"; // используется для вывода сообщений об ошибках (как write(2,,))
	exit(1);
}

void	Contact::getContact(int index) //выводит определенную сторку таблицы контактов
{
	std::cout << std::setw(10) << index + 1 << "|";
	if (this->firstName.length() >= 10)
		std::cout << std::setw(9) << this->firstName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->firstName << "|";
	if (this->lastName.length() >= 10)
		std::cout << std::setw(9) << this->lastName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->lastName << "|";
	if (this->nickname.length() >= 10)
		std::cout << std::setw(9) << this->nickname.substr(0, 9) << ".|" << std::endl;
	else
		std::cout << std::setw(10) << this->nickname << "|" << std::endl;
}