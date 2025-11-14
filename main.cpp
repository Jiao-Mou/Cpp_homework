#include "calculator.h"
#include <iostream>
using namespace std;
void showMenu()
{
    cout << "\n=== 简单计算器 ===" << endl;
    cout << "1. 整型运算" << endl;
    cout << "2. 双精度浮点数运算" << endl;
    cout << "3. 单精度浮点数运算" << endl;
    cout << "4. 退出" << endl;
    cout << "选择数据类型:";
}
template <typename T>
void performCalculations()
{
    Calculator<T> calc;
    T a, b;
    char operation;

    cout << "\n输入计算式(例如,5+3):";
    cin >> a >> operation >> b;
    T result;
    switch (operation)
    {
    case '+':
        result = calc.add(a, b);
        break;
    case '-':
        result = calc.subtract(a, b);
        break;
    case '*':
        result = calc.multiply(a, b);
        break;
    case '/':
        result = calc.divide(a, b);
        break;
    default:
        cout << "非法运算" << endl;
        return;
    }
    calc.DisplayOperation(string(1, operation), a, b, result);
}
int main()
{
    int choice;
    do
    {
        showMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            performCalculations<int>();
            break;
        case 2:
            performCalculations<double>();
            break;
        case 3:
            performCalculations<float>();
            break;
        case 4:
            cout << "Thanks for using." << endl;
            break;
        default:
            cout << "选择非法" << endl;
        }
    } while (choice != 4);
    return 0;
}