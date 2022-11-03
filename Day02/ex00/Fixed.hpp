#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private:
			int _fpnValue;
			static const int _statBit = 8;
	public:
			Fixed( void );							
			~Fixed( void );
			Fixed(const Fixed &fixed);				// конструктор копирования
			Fixed & operator=(const Fixed &fixed);	// перегрузка оператора копирования
			int getRawBits(void) const;
			void setRawBits(int const raw);
};

#endif