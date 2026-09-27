#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    char op;
    cout<<"Enter value of a : ";
    cin >> a ;
    cout<<"enter an operator";
    cin>> op;
    cout<<"Enter value of b : ";
    cin>> b;
    switch (op) 
    {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
        default:
            cout << "Invalid Operator";
    }
    return 0;
}