#include <iostream>
using namespace std;

int main() 
{
    int totalPeople, livingType;

    cout << "Enter total number of people living with you: ";
    cin >> totalPeople;

    cout << "\nEnter 1 for Joint Family, 2 for Separate with Parents/Siblings, 3 for Hostel: ";
    cin >> livingType;

    if (livingType == 1) 
    {
        if (totalPeople > 6) 
        {
            cout << "\nLarge joint family household with grandparents and uncles.";
        } else 
        {
            cout << "\nSmall joint family household.";
        }
    }
    else 
    {
        if (livingType == 2) 
        {
            if (totalPeople > 4)
            {
                cout << "\nLarge  family living separately.";
            } 
            else
            {
                cout << "\nSmall  family living separately.";
            }
        }
        else
        {
            if (livingType == 3) {
                cout << "\nLiving in a hostel .";
            } 
            else 
            {
                cout << "\nInvalid living type choice entered.";
            }
        }
    }
    return 0;
}