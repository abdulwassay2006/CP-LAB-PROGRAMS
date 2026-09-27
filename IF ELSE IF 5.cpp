// A PROGRAM THAT tells height of mens according to girls

#include <iostream>
using namespace std;

int main() 
{
    int h;
    cout << "Enter height in cm: ";
    cin >> h;

    if (h < 150)
        cout << "Short" << endl;
    else if (h <= 165)
        cout << "Below average" << endl;
    else if (h <= 180)
        cout << "Average" << endl;
    else if ( h <= 200)
        cout << "Tall" << endl;
    else
        cout << "Giant" << endl;
    return 0;
}