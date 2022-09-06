#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
	private:
		Contact contact[8];
	public:
		Phonebook();
		~Phonebook();
		void	addContact(int index);
		void	searchContact();
};

#endif