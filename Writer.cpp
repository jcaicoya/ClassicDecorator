
#include "Writer.h"

#include "Component.h"


void Writer::fixComponent(Component *ptr)
{
    _ptr = ptr;
}


void Writer::print(const std::string &str)
{
    _ptr->print(str);
}
