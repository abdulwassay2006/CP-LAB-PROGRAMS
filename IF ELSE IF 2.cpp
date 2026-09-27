// A PROGRAM THAT tells whether alphabet is uppercase, lowecase or is a digit

#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "It is a Uppercase alphabet" << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "It is a Lowercase alphabet" << endl;
    else
        cout << "It is a Digit or symbol" << endl;

    return 0;
}