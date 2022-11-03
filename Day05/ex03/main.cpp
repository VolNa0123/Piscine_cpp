#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat bur("Amelia", 2);
    Intern intern;
    Form *shru;
    Form *rob;
    Form *pres;

    shru = intern.makeForm("ShrubberyCreationForm", "Bender");
    shru->action();

    rob = intern.makeForm("RobotomyRequestForm", "Bender");
    rob->action();

    pres = intern.makeForm("PresidentialPardonForm", "Bender");
    pres->action();

    delete shru;
    delete rob;
    delete pres;
    
    return (0);
}