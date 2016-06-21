
#ifndef TEMPLATEDECORATOR_H
#define TEMPLATEDECORATOR_H

#include <iostream>
#include <string>


void outputLineWithChar(std::size_t length, char c)
{
    std::cout << std::string(length, c) << std::endl;
}


class A{};

class B{};



template <typename T>
void outputLine(std::size_t length, const T &type);


template <>
void outputLine(std::size_t length, const A &)
{
    outputLineWithChar(length, 'A');
}

template <>
void outputLine(std::size_t length, const B &)
{
    outputLineWithChar(length, 'B');
}




template <typename T>
void decoratorPrint(const std::string &str, const T &type);


template <>
void decoratorPrint(const std::string &str, const A &a)
{
   outputLineWithChar(str.length(), 'A');
   std::cout << str << std::endl;
   outputLineWithChar(str.length(), 'A');
}


template <>
void decoratorPrint(const std::string &str, const B &b)
{
   outputLineWithChar(str.length(), 'B');
   std::cout << str << std::endl;
   outputLineWithChar(str.length(), 'B');
}


template <typename T, typename ...Args>
void decoratorPrint(const std::string &str, const T &type, const Args &...args)
{
   outputLine(str.length(), type);
   decoratorPrint(str, args...);
   outputLine(str.length(), type);
}


/*
template <typename T, typename ...Args>
void decoratorPrint(const std::string &str, T &&type, Args && ...args)
{
   print(str, std::forward<T>(type));
   decoratorPrint(str, std::forward<Args>(args)...);
   print(str, std::forward<T>(type));
}
*/

#endif // TEMPLATEDECORATOR_H
