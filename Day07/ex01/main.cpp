#include "iter.hpp"

int main(void)
{
    std::cout << "" << std::endl;
    
    int array[] = {0,1,2,3,4};
    ::iter<int>(array, 5, printArray<int>);

    std::cout << "" << std::endl;

    char c_array[] = "Hello";


    ::iter<char>(c_array, 5, printArray<char>);

    std::cout << "" << std::endl;

    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];
    iter( tab, 5, print );
    iter( tab2, 5, print );

    return (0);
}