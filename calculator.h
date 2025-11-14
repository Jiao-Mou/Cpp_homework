#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
template <typename T>
class Calculator
{
public:
    Calculator() = default;
    T add(T a, T b) const;
    T subtract(T a, T b) const;
    T multiply(T a, T b) const;
    T divide(T a, T b) const;
    void DisplayOperation(const std::string &op, T a, T b, T result) const;
};
#endif