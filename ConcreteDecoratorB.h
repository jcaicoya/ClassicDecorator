
#ifndef CONCRETEDECORATORB_H
#define CONCRETEDECORATORB_H

#include <Decorator.h>

#include <string>


class ConcreteDecoratorB : public Decorator
{
    public:

        //ConcreteDecoratorB()
        ConcreteDecoratorB(Component *ptr);

        void print(const std::string &str) const;
};

#endif // CONCRETEDECORATORB_H
