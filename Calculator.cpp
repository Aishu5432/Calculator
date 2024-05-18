#include<iostream>
using namespace std;
double sub(double, double);
double mul(double, double);
double div(double, double);
double add(double num1, double num2)
{
    cout << "Addition of two numbers:" << num1 + num2;
}
double sub(double num1, double num2)
{
    cout << "Subtraction of two numbers:" << num1 - num2;
}
double mul(double num1, double num2)
{
    cout << "Multiplication of two numbers:" << num1 * num2;
}
double div(double num1, double num2)
{
    if (num2 != 0)
    {
        cout << "Division of two numbers:" << num1 / num2;
    }
    else
    {
        cout << "Cannot be divisible by Zero.";
    }
}
int main()
{
    double num1, num2, res;
    char opr;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    cout << "Enter any operator(+,-,*,/):";
    cin >> opr;
    switch (opr)
    {
    case '+':
        add(num1, num2);
        break;
    case '-':
        sub(num1, num2);
        break;
    case '*':
        mul(num1, num2);
        break;
    case '/':
        div(num1, num2);
        break;
    default:
        cout << "You entered wrong operator.";
    }
    return 0;
}