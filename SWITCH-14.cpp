#include <iostream>
using namespace std;

int main() 
{
    int units;
    cout << "Enter consumed units: ";
    cin >> units;
    switch (units / 100) {
        case 0:
            cout << (units * 15) + 150;
            break;
        case 1:
            cout << (100 * 15) + ((units - 100) * 22) + 250;
            break;
        case 2:
        case 3:
            cout << (100 * 15) + (100 * 22) + ((units - 200) * 35) + 400;
            break;
        default:
            cout << (100 * 15) + (100 * 22) + (200 * 35) + ((units - 400) * 50) + 600;
    }
    return 0;
}