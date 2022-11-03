#include "Fixed.hpp"

Fixed::Fixed(void){
	this->_fpnValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed){				//создается пустой объект и в него копируются значения.
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed){	//в уже существующий объект присваиваются значения.
	if (this == &fixed)
		return *this;
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpnValue);
}

void Fixed::setRawBits(int const raw){
	this->_fpnValue = raw;
}