// A PROGRAM THAT tells season in a specific month

#include <iostream>
using namespace std;

int main() 
{
    int a;
    cout << "Enter month number : ";
    cin >> a;

    switch(a)
    {
        
        case 1: 
		cout << "Winter" << endl; 
		break;
        case 2: 
		cout << "Winter" << endl; 
		break;
        case 3: 
		cout << "Spring" << endl; 
		break;
        case 4: 
		cout << "Spring" << endl; 
		break;
        case 5: 
		cout << "Summer" << endl; 
		break;
        case 6: 
		cout << "Summer" << endl; 
		break;
        case 7: 
		cout << "Summer" << endl; 
		break;
        case 8: 
		cout << "Summer" << endl; 
		break;
        case 9: 
		cout << "Autumn" << endl; 
		break;
        case 10: 
		cout << "Autumn" << endl; 
		break;
        case 11: 
		cout << "Winter" << endl; 
		break;
        case 12: 
		cout << "Winter" << endl; 
		break;
		
        default:
            cout << "Invalid month" << endl;
    }

    return 0;
}