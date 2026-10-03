// A PROGRAM THAT tells about big and low score of a player in cricket

#include <iostream>
using namespace std;
int main()
{ 
    int r;
	cout << "Runs scored by a palyer : " ;
	cin >> r;
	
    if(r>=50) 
	{
	    if(r>=100)
		cout << "Century! Congratulations!" << endl;
		else 
		cout << "Half century!";
	}
	
    else
	{
	if(r==0)
	cout <<"Duck! hahahaha";
	else 
	cout<<"Keep practicing till you make it";
	}
	
    return 0;
}