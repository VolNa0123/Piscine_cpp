#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

class Awesome
{
    public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
    private:
    int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

template <class myType>
void swap (myType &a, myType &b) 
{
    myType temp;
    temp = a;
    a = b;
    b = temp;
}

template <class myType>
myType min (myType a, myType b) 
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <class myType>
myType max (myType a, myType b) 
{
    if (a > b)
        return (a);
    else
        return (b);
}


#endif