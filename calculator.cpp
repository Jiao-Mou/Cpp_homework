#include "calculator.h"
#include <iostream>
template <typename T>
T Calculator<T>::add(T a, T b) const
{
    return a + b;
}
template <typename T>
T Calculator<T>::subtract(T a, T b) const
{
    return a - b;
}
template <typename T>
T Calculator<T>::multiply(T a, T b) const
{
    return a * b;
}
template <typename T>
T Calculator<T>::divide(T a, T b) const
{
    if (b == 0)
    {
        std::cout << "Error:除数不能为零" << std::endl;
    }
    return a / b;
}
template <typename T>
void Calculator<T>::DisplayOperation(const std::string &op, T a, T b, T result) const
{
    std::cout << a << " " << op << " " << b << "=" << result << std::endl;
}
template class Calculator<int>;
template class Calculator<double>;
template class Calculator<float>;