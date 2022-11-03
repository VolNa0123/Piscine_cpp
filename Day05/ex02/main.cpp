#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
    Bureaucrat bur("Amelia", 2);
    Bureaucrat other_bur("Fernanda", 150);

    std::cout << bur;

    ShrubberyCreationForm shru("other");

    shru.action();
    std::cout << shru;

    RobotomyRequestForm rob("other");

    rob.action();
    std::cout << rob;

    PresidentialPardonForm pre("other");

    pre.action();
    std::cout << pre;

    bur.executeForm(shru);
    other_bur.executeForm(shru);

    bur.executeForm(rob);
    other_bur.executeForm(rob);

    bur.executeForm(pre);
    other_bur.executeForm(pre);
    
    return (0);
}