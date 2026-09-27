#include <iostream>
using namespace std;

int main() 
{
    int days;
    cout << "Enter NO. of days you late : ";
    cin >> days;
    
    if (days <= 0) 
    {
        cout << "No Fine";
    } 
    else if
    (days >= 1 && days <= 5) 
    {
        cout<<"\nFine = " << days * 20;
    } 
    else if (days >= 6 && days <= 10)
    {
        cout <<"\nFine = " << days * 50;
    } 
    else if (days > 10 && days <= 20)
    {
        cout <<"\nfine = "<< days * 100;
    }
    else
    {
        cout << "\nMembership Suspended";
    }
    return 0;
}