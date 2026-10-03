// A PROGRAM THAT tells podium finish of a racer

#include <iostream>
using namespace std;
int main()
{
    int p;
	cout << "Your finishing position: ";
	cin >> p;
    if(p>=1)
	{
        if(p<=3)
		{
		    if(p==1)
		    cout << "Gold!";
	    	else
		    {
		        if(p==2)
				cout << "Silver!" ;
				else 
				cout << "Bronze!";
			}
		}
        else 
		cout << "Better luck next race";
    }
	else 
	cout << "Invalid position";
	
    return 0;
}