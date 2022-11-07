#include "Base.hpp"

Base* generate(void){
    srand(time(0)); //srand() позволяет запускать программу несколько раз с различными последователь­ностями псевдослучайных чисел.
    int x = 100;
    while (x == 100)
        x = (rand() % 100);

    Base *newBase;
    if (x <= 33)
    {
        std::cout << "CREATE: A" << std::endl;
        return (newBase = new A());
    }
    else if (x <= 66)
    {
        std::cout << "CREATE: B" << std::endl;
        return (newBase = new B());
    }
    else
    {
        std::cout << "CREATE: C" << std::endl;
        return (newBase = new C());
    }
}

// dynamic_cast используется для динамического приведения типов во время выполнения.
// Безопасное приведение типов по иерархии наследования.

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "IDENTIFIED *: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "IDENTIFIED *: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "IDENTIFIED *: C" << std::endl;
    else
        std::cout << "NOT ABLE TO IDENTIFY" << std::endl;
}

void identify(Base& p){
    try 
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "IDENTIFIED &: A" << std::endl;
    }
    catch (std::exception &error)
    {
        try 
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "IDENTIFIED &: B" << std::endl;
        }
        catch (std::exception &error)
        {
            try 
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "IDENTIFIED &: C" << std::endl;
            }
            catch (std::exception &error)
            {
                std::cout << error.what() << std::endl;
            }
        }
    }
}