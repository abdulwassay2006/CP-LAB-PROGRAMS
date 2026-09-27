// A PROGRAM THAT tells name of planets according to their position from Sun

#include <iostream>
using namespace std;

int main() 
{
    int a;
    cout << "Enter position from SUN: ";
    cin >> a;

    switch(a)
    {
        case 1: 
		cout << "Mercury" << endl; 
		break;
        case 2: 
		cout << "Venus" << endl; 
		break;
        case 3: 
		cout << "Earth" << endl; 
		break;
        case 4: 
		cout << "Mars" << endl; 
		break;
        case 5: 
		cout << "Jupiter" << endl; 
		break;
        case 6: 
		cout << "Saturn" << endl; 
		break;
        case 7: 
		cout << "Uranus" << endl; 
		break;
        case 8: 
		cout << "Neptune" << endl; 
		break;
		
        default:
            cout << "Invalid number" << endl;
    }

    return 0;
}