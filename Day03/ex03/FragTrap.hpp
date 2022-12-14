#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(FragTrap &frag);
        FragTrap &operator= (FragTrap &copy);
        FragTrap(std::string name);
        void frag_attack(std::string const &target);
        void highFivesGuys(void);
};

#endif