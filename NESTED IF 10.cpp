// A PROGRAM THAT tells wheather precuation depending upon the wheather 


#include <iostream>
using namespace std;
int main()
{
    char rain;
	char umb;
	cout << "Is it raining? 'Y' or 'N': ";
	cin >> rain;
    if(rain=='Y')
	{
	    cout << "Have an umbrella? 'Y' or 'N': ";
		cin >> umb;
        if(umb==1) 
		cout << "Smart person!";
		else 
		cout << "Unlucky! Now you have to wait for rain to end";
	}
	
    else 
	cout << "Sunny day it seems";
	
    return 0;
}