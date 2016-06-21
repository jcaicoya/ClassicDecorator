
#ifndef WRITER_H
#define WRITER_H


#include <string>

class Component;

class Writer
{
    public:

        void fixComponent(Component *ptr);

        void print(const std::string &str);

    private:
        Component *_ptr;
};

#endif // WRITER_H
