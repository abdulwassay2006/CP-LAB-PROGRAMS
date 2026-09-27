// A PROGRAM THAT tells whether the person is adult or minor

#include <iostream>
using namespace std;

int main() 
{
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18)
        {
		cout << "Person is an Adult" << endl;
	    }
    else
        {
		cout << "Person is a Minor" << endl;
        }
        
    return 0;
}