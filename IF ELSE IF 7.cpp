// A PROGRAM THAT helps you keep track of your hydration level

#include <iostream>
using namespace std;

int main() 
{
    int g;
    cout << "How many glasses of water have you had today? ";
    cin >> g;

    if (g < 4)
        cout << "You need to drink more water." << endl;
    else if (g < 8 )
        cout << "Good, keep going to reach your goal." << endl;
    else if ( g >=8 || g <=12)
        cout << "Great job, you've hit your water goal!" << endl;
    else 
        cout << "Invalid input!";
        
    return 0;
}