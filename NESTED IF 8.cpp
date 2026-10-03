// A PROGRAM THAT tells whether you passed or fail

#include <iostream>
using namespace std;

int main()
{
    int marks;
	cout << "Enter your obtained marks : ";
	cin >> marks;
	
    if(marks>=0&&marks<=100)
	{
        if(marks>=40)
		{
		    if(marks>=80)
			    cout << "Excellent! You are great dude." << endl;
			else 
			    cout << "Passed." << endl;
		}
        else 
		cout <<  "Failed, try again." << endl;
    }
    else 
	cout << "Invalid marks." << endl;
	
    return 0;
}