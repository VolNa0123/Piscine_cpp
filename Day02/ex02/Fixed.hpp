#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
	private:
			int _fpnValue;
			static const int _statBit = 8;
	public:
			Fixed( void );
			~Fixed( void );
			Fixed(const Fixed &fixed);
			Fixed & operator=(const Fixed &fixed);
			int getRawBits(void) const;
			void setRawBits(int const raw);

			Fixed(const int num);
			Fixed(const float num);
			float toFloat( void ) const;
			int toInt( void ) const;

			bool operator>(const Fixed &fixed) const;
			bool operator<(const Fixed &fixed) const;
			bool operator>=(const Fixed &fixed) const;
			bool operator<=(const Fixed &fixed) const;
			bool operator==(const Fixed &fixed) const;
			bool operator!=(const Fixed &fixed) const;

			Fixed operator+(const Fixed &fixed) const;
			Fixed operator-(const Fixed &fixed) const;
			Fixed operator*(const Fixed &fixed) const;
			Fixed operator/(const Fixed &fixed) const;

			Fixed &operator++(void);
     		Fixed operator++(int);
     		Fixed &operator--(void);
      		Fixed operator--(int);

			static Fixed & min(Fixed &one, Fixed &two); 					
			static const Fixed & min(const Fixed &one, const Fixed &two);	
			static Fixed & max(Fixed &one, Fixed &two);						
			static const Fixed & max(const Fixed &one, const Fixed &two);	
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif