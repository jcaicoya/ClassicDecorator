
#include "Decorator.h"

Decorator::Decorator(Component *ptr) : _ptr(ptr)
{}


Decorator::~Decorator()
{}


void Decorator::print(const std::string &str) const
{
    _ptr->print(str);
}
