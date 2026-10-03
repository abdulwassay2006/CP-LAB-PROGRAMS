// A PROGRA THAT tells attendence low or good


#include<iostream>
using namespace std;
int main()
{
    int p;
	cout << "Attendance percentage: ";
	cin >> p;
	
    if(p>=0&&p<=100)
	{
        if(p>=75)
		{
		    if(p>=95)
			cout << "wow! very high attendence";
			else 
			cout<<"Eligible for exams";
		}
        else 
	    cout << "Attendance is too low ";
	}
    else 
	cout << "Invalid percentage";
	
    return 0;
}