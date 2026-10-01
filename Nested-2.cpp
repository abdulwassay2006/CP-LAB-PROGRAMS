#include <iostream>
using namespace std;

int main() 
{
    int marks;
    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    if (marks >= 50) 
    {
        if (marks >= 85) 
        {
            cout << "Grade: A+";
        } 
        else
        {
            if (marks >= 70) 
            {
                cout << "Grade: A";
            }
            else 
            {
                cout << "Grade: B";
            }
        }
    }
    else 
    {
        cout << "Grade: F (Fail)";
    }
    return 0;
}