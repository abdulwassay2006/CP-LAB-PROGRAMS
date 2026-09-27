// A PROGRAM THAT tells mental status from using phone

#include <iostream>
using namespace std;

int main() 
{
    int st;
    cout << "Enter your screen time in hours: ";
    cin >> st;

    if ( st >= 8)
        cout << "You are addicted to phone " << endl;
    else
        cout << "You are good! Keep it even low " << endl;

    return 0;
}

