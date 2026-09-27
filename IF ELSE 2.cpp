// A PROGRAM THAT tells whether the alphabet are uppercase or lowercase and numbers

#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase letter" << endl;
    else
        cout << "Lowercase letter or number" << endl;

    return 0;
}