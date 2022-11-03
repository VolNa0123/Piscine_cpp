#include "Fixed.hpp"

Fixed::Fixed( void ){
	this->_fpnValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed & fixed){
	std::cout << "Copy constructor called" << std::endl;
	// this->_fpnValue = fixed.getRawBits();
	*this = fixed;
}

Fixed & Fixed::operator=(const Fixed & fixed){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fixed)
		return *this;
	this->_fpnValue = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{
	return (this->_fpnValue);
}

void Fixed::setRawBits(int const raw){
	this->_fpnValue = raw;
}

Fixed::Fixed(const int num){	// при переводе инта в формат Fixed сдвигаем число на 8 бит, таким образом, дробная часть остается пустой
	this->_fpnValue = num * (1 << this->_statBit);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num){
	this->_fpnValue = roundf(num * (1 << this->_statBit));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
	return ((float)this->_fpnValue / (float)(1 << this->_statBit));
}

int Fixed::toInt( void ) const{
	return(this->_fpnValue >> this->_statBit);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed){
	o << fixed.toFloat();
	return o;
}
