
#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.h"

#include <string>


class Decorator : public Component
{
    public:
        Decorator(Component *);

        virtual ~Decorator();

        virtual void print(const std::string &str) const;

    private:
        Component *_ptr;
};

#endif // DECORATOR_H
