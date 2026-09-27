// A PROGRAM THAT does arithematic calculations when 2 numbers are given as input

#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "\nEnter operator (+, -, *, /): ";
    cin >> op;
    cout << "\nEnter second number: ";
    cin >> num2;

    if (op == '+')
        cout << "Result: " << num1 + num2 << endl;
    else if (op == '-')
        cout << "Result: " << num1 - num2 << endl;
    else if (op == '*')
        cout << "Result: " << num1 * num2 << endl;
    else if (op == '/')
        cout << "Result: " << num1 / num2 << endl;
    else
        cout << "Invalid operator" << endl;

    return 0;
}