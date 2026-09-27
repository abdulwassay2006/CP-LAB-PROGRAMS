// A PROGRAM THAT tells if you were driving over the speed limit or not

#include <iostream>
using namespace std;

int main() 
{
    int s;
    cout << "Enter your speed: ";
    cin >> s;

    if (s > 80)
        {
		cout << "Your speed was over the speed limit" << endl;
	    }
    else
        cout << "Your speed was within the speed limit" << endl;

    return 0;
}