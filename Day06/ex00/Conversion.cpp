#include "Conversion.hpp"

Conversion::Conversion(){
    std::cout << "Default Constructor called for Conversion" << std::endl;
    _type = 0;

    return ;
}

Conversion::~Conversion(){
    std::cout << "Destrutor called for Conversion" << std::endl;
    return ;
}

Conversion::Conversion(char *argv){
    std::cout << "Constructor called for Conversion" << std::endl;
    _type = 0;
    _input = static_cast<std::string>(argv);
    detectType(argv);
    return ;
}

Conversion::Conversion( Conversion &conv) : _input(conv._input){
    std::cout << "Copy Constructor called for Conversion" << std::endl;
    *this = conv;
    return ;
}

Conversion& Conversion::operator=( Conversion &conv){
    std::cout << "Assignation Operator Constructor called for Conversion" << std::endl;
    _type = conv._type;
    _value = conv._value;
    return (*this);
}

void Conversion::detectType(char *argv){
    std::string conv = static_cast<std::string>(argv);
    if (_input.length() == 1)
    {
        char c = _input[0];
        if (c >= 48 && c <= 57)
            this->setValue(c - 48);
        else
            this->setValue(c);
    }
    else if (!(conv.compare("-inff")) || !(conv.compare("-inf")))
        _type = 1;
    else if (!(conv.compare("+inff")) || !(conv.compare("+inf")) || !(conv.compare("inff")) || !(conv.compare("inf")))
        _type = 2;
    else if (!(conv.compare("nanf")) || !(conv.compare("nan")))
        _type = 3;
    else
    {
        char *end;
        this->setValue(strtod(argv, &end)); //преобразовывает строку string в double
    }
}

// Буду использовать static_cast. Он преобразует выражения одного статического типа в
// объекты и значения другого статического типа. Поддерживается преобразование численных типов,
// указателей и ссылок по иерархии наследования как вверх, так и вниз. 

void    Conversion::convChar(void){
    if (_type > 0 ||_value < 0 || _value > 126)
        std::cout << "Char: Impossible" << std::endl;
    else if (_value >= 0 && _value <= 31)
        std::cout << "Char: Non displayable" << std::endl;
    else
    {
        char c = static_cast<char>(_value);
        std::cout << "Char: " << c << std::endl;
    }
}

void    Conversion::convInt(void){
    if (_type > 0)
        std::cout << "Integer: Impossible" << std::endl;    
    else
    {
        int i = static_cast<int>(_value);
        std::cout << "Integer: " << i << std::endl; 
    }
}

void    Conversion::convFloat(void){
    if (_type == 1)
        std::cout << "Float: -inff" << std::endl;    
    else if (_type == 2)
        std::cout << "Float: +inff" << std::endl; 
    else if (_type == 3)
        std::cout << "Float: nanf" << std::endl; 
    else 
    {
        float f = static_cast<float>(_value);
        std::cout << "Float: " << f << "f" << std::endl; 
    }    
}

void    Conversion::convDouble(void){
    if (_type == 1)
        std::cout << "Float: -inf" << std::endl;    
    else if (_type == 2)
        std::cout << "Float: +inf" << std::endl; 
    else if (_type == 3)
        std::cout << "Float: nan" << std::endl; 
    else 
        std::cout << "Double: " << _value << std::endl;        
}

int    Conversion::getType(void){
    return (_type);
}

std::string&    Conversion::getInput(void){
    return (_input);
}

double    Conversion::getValue(void){
    return (_value);
}

void    Conversion::setValue(double x){
    _value = x;
}

std::ostream &operator<<( std::ostream & ost, Conversion &conv){
	ost << "input: " << conv.getInput() << ", value: " << conv.getValue() << ", type: " << conv.getType() << std::endl;
	return ost;
}