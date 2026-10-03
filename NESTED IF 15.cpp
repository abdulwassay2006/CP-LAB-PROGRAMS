// A PROGRAM THAT tells starting place on grid before a race 

#include <iostream>
using namespace std;
int main()
{
    int p;
	cout << "Your starting position: ";
	cin >> p;
    if(p>=1&& p<=30)
	{
        if(p==1 || p==2)
		{
		    cout << "Front Row" ;
		}
        else if(p==3 || p==4)
		{
			cout << "Second Row";
	    }
	    else if(p==5 || p==6)
		{
			cout << "Third Row";
		}
		else if(p==7 || p==8)
		{
			cout << "Fourth Row";
		}
		else if(p==9 || p==10)
		{
			cout << "Fifth Row";
		}
		else if(p==11 || p==12)
		{
			cout << "Sixth Row";
		}
		else if(p==13 || p==14)
		{
			cout << "Seventh Row";
		}
		else if(p==15 || p==16)
		{
			cout << "Eight Row";
		}
		else if(p==17 || p==18)
		{
			cout << "Ninth Row";
		}
		else if(p==19 || p==20)
		{
			cout << "Tenth Row";
		}
		else if(p==21 || p==22)
		{
			cout << "Eleventh Row";
		}
		else
		cout << "Pitlane start";
    
    }
	else 
	cout << "Invalid position";
	
	return 0;
}