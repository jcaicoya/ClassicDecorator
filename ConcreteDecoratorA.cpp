
#include "ConcreteDecoratorA.h"

#include <iostream>


ConcreteDecoratorA::ConcreteDecoratorA(Component *ptr): Decorator(ptr)
{}


void ConcreteDecoratorA::print(const std::string &str) const
{
   std::cout << std::string(str.length(), 'A') << std::endl;
   Decorator::print(str);
   std::cout << std::string(str.length(), 'A') << std::endl;
}
