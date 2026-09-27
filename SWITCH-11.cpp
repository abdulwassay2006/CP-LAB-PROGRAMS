#include <iostream>
using namespace std;

int main() {
    int month;
    cout<<"enter mounth in integral form : ";
    cin >> month;
    switch (month)
    {
        case 1:
            cout << "31 Days";
            break;
        case 2:
            cout << "28 or 29 Days";
            break;
        case 3:
            cout << "31 Days";
            break;
        case 4:
            cout << "30 Days";
            break;
        case 5:
            cout << "31 Days";
            break;
        case 6:
            cout << "30 Days";
            break;
        case 7:
            cout << "31 Days";
            break;
        case 8:
            cout << "31 Days";
            break;
        case 9:
            cout << "30 Days";
            break;
        case 10:
            cout << "31 Days";
            break;
        case 11:
            cout << "30 Days";
            break;
        case 12:
            cout << "31 Days";
            break;
        default:
            cout << "Invalid Month";
    }
    return 0;
}