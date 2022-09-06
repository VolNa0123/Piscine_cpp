#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip> // setw
# include <cctype>
# include <string>
# include <array>

class Contact
{
	private:
		std::string 	firstName;
		std::string 	lastName;
		std::string 	nickname;
		std::string 	phoneNumber;
		std::string 	darkestSecret;

	public:
		Contact();
		~Contact();
		void		displayContact(); // распечатывает выбранный контакт по индексу
		void		getContact(int index); //выводит определенную сторку таблицы контактов
		void		setContact(); // последовательно вызывает функцию запроса для все х полей и записывает их в экземпляр класса
		std::string	getField(std::string field); // запрашивает и возвращает вызывываемое поле контакта
};

#endif