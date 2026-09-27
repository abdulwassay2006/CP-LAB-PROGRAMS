// A PROGRAM THAT gives remarks according to grade

#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter your grade : ";
    cin >> c;

    switch(c)
    {
        case 'A': 
		cout << "Excellent" << endl; 
		break;
        case 'B': 
		cout << "Very Good" << endl; 
		break;
        case 'C': 
		cout << "Good" << endl; 
		break;
        case 'D': 
		cout << "Fair" << endl; 
		break;
        case 'E': 
		cout << "Poor" << endl; 
		break;
		
        default:
            cout << "Invalid grade" << endl;
    }

    return 0;
}