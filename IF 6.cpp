// A PROGRAM that tells that its wweekday or weekend

#include <iostream>
using namespace std;

int main()
 {
    int day;
    cout << "Enter day number : ";
    cin >> day;

    if (day == 6 || day == 7) 
	{
        cout << "It's the weekend. Enjoy your holiday!" << endl;
    }
    
    if (day >= 1 && day <= 5) 
	{
        cout << "It's a weekday. Have a bad day." << endl;
    }
    
    return 0;
}