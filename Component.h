
#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>


class Component
{
    public:
        virtual ~Component();

        virtual void print(const std::string &) const = 0;
};

#endif // COMPONENT_H
