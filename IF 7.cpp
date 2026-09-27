// A PROGRAM THAT cheers you when you are feeling down

#include <iostream>
#include<string>
using namespace std;

int main() 
{
	// Got help from google to use yes and no as input
	
    string day;
    cout << "Are you feeling good? yes or no ";
    cin >> day;

    if (day == "yes") 
	{
        cout << " GOOD! Keep your chin high " << endl;
    }
    if (day == "no")
	{
        cout << " Good times will come twin. Don't be sad buddy " << endl;
    }
    return 0;
}