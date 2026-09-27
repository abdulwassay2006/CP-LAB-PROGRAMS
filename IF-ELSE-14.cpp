#include <iostream>
using namespace std;

int main() 
{
    int month, day;
    cout<<"enter a mounth in no (1-12) : ";
    cin >> month ;
    cout<<"enter date : ";
    cin>> day;
    if (month == 2) 
    {
        if (day >= 1 && day <= 28) 
        {
            cout << "Valid February Date";
        }
        else 
        {
            cout << "Invalid February Date";
        }
    } else {
        if (month == 4 || month == 6 || month == 9 || month == 11) 
        {
            if (day >= 1 && day <= 30) {
                cout << "Valid 30-day Month Date";
            } 
            else 
            {
                cout << "Invalid 30-day Month Date";
            }
        } else {
            if (month >= 1 && month <= 12)
            {
                if (day >= 1 && day <= 31) 
                {
                    cout << "Valid 31-day Month Date";
                } 
                else 
                {
                    cout << "Invalid 31-day Month Date";
                }
            } 
            else
            {
                cout << "Invalid Month";
            }
        }
    }
    return 0;
}
