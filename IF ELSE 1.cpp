// A PROGRAM THAT tells positive and negative numbers

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0)
        cout << "Positive number" << endl;
    else
        cout << "Negative number" << endl;

    return 0;
}