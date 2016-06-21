
#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H


#include "Component.h"

#include <string>

class ConcreteComponent : public Component
{
    public:

       void print(const std::string &) const;
};

#endif // CONCRETECOMPONENT_H
