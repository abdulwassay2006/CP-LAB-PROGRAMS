// A PROGRAM THAT tells your year no. in university by your semester

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter semester number: ";
    cin >> x;

    switch(x)
    {
        case 1: 
		cout << "It's Year 1" << endl; 
		break;
        case 2: 
		cout << "It's Year 1" << endl; 
		break;
        case 3: 
		cout << "It's Year 2" << endl; 
		break;
        case 4: 
		cout << "It's Year 2" << endl; 
		break;
        case 5: 
		cout << "It's Year 3" << endl; 
		break;
        case 6: 
		cout << "It's Year 3" << endl; 
		break;
        case 7: 
		cout << "It's Year 4" << endl; 
		break;
        case 8: 
		cout << "It's Year 4" << endl; 
		break;
		
        default:
            cout << "Invalid semester" << endl;
    }

    return 0;
}