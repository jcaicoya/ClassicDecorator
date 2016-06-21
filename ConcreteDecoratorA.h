
#ifndef CONCRETEDECORATORA_H
#define CONCRETEDECORATORA_H


#include "Decorator.h"

#include <string>


class ConcreteDecoratorA : public Decorator
{
    public:
        ConcreteDecoratorA(Component *ptr);

        void print(const std::string &str) const;
};

#endif // CONCRETEDECORATORA_H
