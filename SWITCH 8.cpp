// A PROGRAM THAT tells my 24 hours of day

#include <iostream>
using namespace std;

int main() {
    int h;
    cout << "Enter hour (0-23): ";
    cin >> h;

    switch(h)
    {
        case 0: 
		cout << "Sleeping" << endl; 
		break;
        case 1: 
		cout << "Sleeping" << endl; 
		break;
        case 2: 
		cout << "Sleeping" << endl; 
		break;
        case 3: 
		cout << "Sleeping" << endl; 
		break;
        case 4: 
		cout << "Sleeping" << endl; 
		break;
        case 5: 
		cout << "Praying Fajr" << endl; 
		break;
        case 6: 
		cout << "Sleeping" << endl; 
		break;
        case 7: 
		cout << "Wakeup,Breakfast and Bathing" << endl; 
		break;
        case 8: 
		cout << "Travel to University" << endl; 
		break;
        case 9: 
		cout << "Study at University" << endl; 
		break;
        case 10: 
		cout << "Study at University" << endl; 
		break;
        case 11: 
		cout << "Study at University" << endl; 
		break;
        case 12: 
		cout << "Study at University" << endl; 
		break;
        case 13: 
		cout << "Pray and lunch" << endl; 
		break;
        case 14: 
		cout << "Study at University" << endl; 
		break;
        case 15: cout << "Study at University" << endl; 
		break;
        case 16: cout << "Going Home" << endl; 
		break;
        case 17: 
		cout << "Resting" << endl; 
		break;
        case 18: 
		cout << "Family Time" << endl; 
		break;
        case 19: 
		cout << "Revising University work" << endl; 
		break;
        case 20: 
		cout << "Dinner" << endl; 
		break;
        case 21: 
		cout << "Free Time" << endl; 
		break;
        case 22: 
		cout << "Playing game" << endl; 
		break;
        case 23: 
		cout << "Getting ready for bed" << endl; 
		break;
        
        default:
            cout << "Invalid hour" << endl;
    }

    return 0;
}