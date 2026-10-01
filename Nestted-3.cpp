#include <iostream>
using namespace std;

int main() 
{
    float balance = 50000.0;
    float limit = 20000.0;
    float amount;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= balance)
    {
        if (amount <= limit) 
        {
            cout << "\nTransaction successful. Please collect your cash.";
        } 
        
        else
        {
            cout << "\nTransaction failed. Amount exceeds daily withdrawal limit.";
        }
    } 
    else 
    {
        cout << "\nTransaction failed. Insufficient account balance.";
    }
    return 0;
}