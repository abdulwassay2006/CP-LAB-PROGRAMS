#include <iostream>
using namespace std;

int main() 
{
    int length;
    char hasSpecialChar;

    cout << "Enter the number of characters in your password: ";
    cin >> length;

    if (length >= 8) 
    {
        cout << "Does it contain a special character like @ or #? (y/n): ";
        cin >> hasSpecialChar;

        if (hasSpecialChar == 'y' || hasSpecialChar == 'Y') 
        {
            cout << "Strong Password! Your account is secure.";
        } 
        else
        {
            cout << "Moderate Password. Consider adding a special character for extra security.";
        }
    }
    else
    {
        cout << "Weak Password. Password must be at least 8 characters long.";
    }
    return 0;
}