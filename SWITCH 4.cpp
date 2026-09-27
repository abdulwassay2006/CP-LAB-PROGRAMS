// A PROGRAM THATttells how rating system workd when rating is given on the sacle of 1-5

#include <iostream>
using namespace std;

int main() 
{
    int r;
    cout << "Enter rating on scale of 1-5 : ";
    cin >> r;

    switch(r)
    {
        case 1: 
		cout << "Very Poor" << endl; 
		break;
        case 2: 
		cout << "Poor" << endl; 
		break;
        case 3: 
		cout << "Average" << endl; 
		break;
        case 4: 
		cout << "Good" << endl; 
		break;
        case 5: 
		cout << "Excellent" << endl; 
		break;
		
        default:
            cout << "Invalid rating" << endl;
    }

    return 0;
}