// A PROGRAM THAT gives you season name when you give season number

#include <iostream>
using namespace std;

int main() 
{
    int c;
    cout << "Enter Season number: ";
    cin >> c;

    switch(c)
    {
        case 1 : 
		cout << "Spring" << endl; 
		break;
        case 2 : 
		cout << "Summer" << endl; 
		break;
        case 3 : 
		cout << "Autum" << endl; 
		break;
        case 4 : 
		cout << "Winter" << endl; 
		break;
        
        default:
            cout << "Invalid number for a season" << endl;
    }

    return 0;
}