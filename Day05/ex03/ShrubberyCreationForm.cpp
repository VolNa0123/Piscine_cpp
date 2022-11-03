#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
    std::cout << "Default Constructor called for ShrubberyCreationForm" << std::endl;
    
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)  : Form("ShrubberyCreationForm", 145, 137){
    std::cout << "Construtor Constructor called for ShrubberyCreationForm" << std::endl;
    _target = target;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubbery) : Form("ShrubberyCreationForm", 145, 137){
    std::cout << "Copy Constructor called for ShrubberyCreationForm" << std::endl;
    *this = shrubbery;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubbery){
    _target = shrubbery._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "Destructor called for ShrubberyCreationForm" << std::endl;
    return ;
}

void ShrubberyCreationForm::action() const{

    std::fstream file;
    std::string file_name;
    file_name = _target;
    file_name.append("_shrubbery");
    file.open(file_name.c_str(), std::ios::out | std::ios::in | std::ios::trunc);
    if (!file)
        std::cout << "ERROR CREATING FILE" << std::endl;

    file << "         000000000000              " << std::endl;
    file << "     @@@@@@@00000000000            " << std::endl;
    file << "    @@@@@@@@@000000@@@@@@          " << std::endl;
    file << "   @@@@@@@@@@@@000@@@@@@@@@        " << std::endl;
    file << "    @@@@@@@@@@@@00@@@@@@@@@@@      " << std::endl;
    file << "      @@@@@@@@@@@@@@@@@@@@@@@      " << std::endl;
    file << "       @@@@@@ @@@@@@@@@@@@@@       " << std::endl;
    file << "      00@@@@  @@@ @@@ @@@@@        " << std::endl;
    file << "     00000  \\ !!   // `-,         " << std::endl;
    file << "      000\0  \\!!  //     `--      " << std::endl;
    file << "        00    !!!!//|   !  |      " << std::endl;
    file << "              !!!!/ |  ;)  |       " << std::endl;
    file << "              !!!!  |   /  |       " << std::endl;
    file << "          ___________________      " << std::endl;
    file << "              !!!!                 " << std::endl;
    file << "              !!!!                 " << std::endl;
    file << "              !!!!                 " << std::endl;
    file << "              !!!!                 " << std::endl;
    file << "              !!!!                 " << std::endl;
    file << "  * *  **     !!!!      * *        " << std::endl;
    file << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << std::endl;
    file.close();
}