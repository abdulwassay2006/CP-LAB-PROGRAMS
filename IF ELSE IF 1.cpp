// A PROGRAM that tells whether input number is positive negative or zero

#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        {
		cout << "Number is positive" << endl;
	    }
    else if (num < 0)
        {
		cout << "Number is negative" << endl;
	    }
	    
    else
        cout << "It is Zero" << endl;

    return 0;
}