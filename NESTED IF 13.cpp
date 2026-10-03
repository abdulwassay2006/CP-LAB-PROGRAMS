// A PROGRAM THAT tells your fitness level according to your pushups count

#include <iostream>
using namespace std;
int main()
{
    int n;
	cout << "Push-ups done: ";
	cin >> n;
	
    if(n>=30)
	{
	    if(n>=50)
		cout << "Fitness champion";
		else 
		cout << "You are Fit";
	}
    else
	{
	    if(n>=1)
		cout << "keep it up";
		else 
		cout << "Try, try again!";
	}
	
    return 0;
}