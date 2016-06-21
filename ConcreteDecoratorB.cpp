
#include "ConcreteDecoratorB.h"


#include <iostream>


ConcreteDecoratorB::ConcreteDecoratorB(Component *ptr): Decorator(ptr)
{}


void ConcreteDecoratorB::print(const std::string &str) const
{
   std::cout << std::string(str.length(), 'B') << std::endl;
   Decorator::print(str);
   std::cout << std::string(str.length(), 'B') << std::endl;
}

