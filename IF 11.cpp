#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;
    cout << "Enter a number : ";
    cin >>a;
    cout << "Enter a number : ";
    cin >>b;
    cout << "Enter a number : ";
    cin >>c;
    
    if (a > b && a > c) 
    {
        cout << "The first number is the greatest." ;
    }
    
    return 0;
}