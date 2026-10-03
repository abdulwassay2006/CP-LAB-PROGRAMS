// A PROGRAM THAT helps in chosing CR after voting

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Votes for Shoaib and Kanita: ";
	cin >> a >> b;
	
    if(a!=b)
	{
	    if(a>b)
		cout << "Shoiab is the CR ";
		else 
		cout << "Kanita is the CR";
	}
    else
	{
	    if(a == 0 || b == 0)
		cout << "Nobody voted";
		else 
		cout << "it's a tie, vote again.";
	}
    return 0;
}