// A PROGRAM THAT helps you with homework reminder

#include <iostream>
using namespace std;

int main()
{ // no grip on string yet for me
    char a;
    cout << "Is your homework done? (y/n) ";
    cin >> a;

    if (a == 'y')
    {
		cout << "Awesome, free time now! Let's doomscrool now." << endl;
    }
    
    if (a == 'n')
    {
		cout << "Twin finish it before deadline." << endl;
	}

    return 0;
}