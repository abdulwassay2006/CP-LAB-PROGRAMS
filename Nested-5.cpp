#include <iostream>
using namespace std;

int main() 
{
    float bill;
    char isMember;

    cout << "Enter total shopping bill amount: ";
    cin >> bill;

    if (bill >= 5000) 
    {
        cout << "\nAre you a loyalty club member? (y/n): ";
        cin >> isMember;

        if (isMember == 'y' || isMember == 'Y') 
        {
            cout << "\nCongratulations! You get a 20% discount and free delivery.";
        }
        else 
        {
            cout << "\nYou get a 10% discount and free delivery.";
        }
    }
    else 
    {
        cout << "\nStandard delivery charges apply. No discount available.";
    }
    return 0;
}