#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat bur("Amelia", 30);
    Form form("FORMA", 5, 10);
    Form other_form("OTHER_FORM", 35, 10);

    std::cout << form.getGradeToExecute() << std::endl;
    std::cout << form.getGradeToSign() << std::endl;
    std::cout << form.getName() << std::endl;

    std::cout << form;

    try
    {
        form.beSigned(bur);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << form.getSigned() << std::endl;

    try
    {
        other_form.beSigned(bur);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << other_form.getSigned() << std::endl;

    try 
    {
        Form try_form("TRY", 1, 151);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    try 
    {
        Form try_form("TRY", 1, 149);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    try 
    {
        Form try_form("TRY", -1, 149);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    
    return (0);
}