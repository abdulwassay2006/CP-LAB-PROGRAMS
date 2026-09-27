#include <iostream>
using namespace std;

int main()
{
    int grade;
    float basic;
    cout << "Enter employee grade(1-4): ";
    cin >> grade;
    cout << "Enter basic salary: ";
    cin >> basic;
    switch (grade)
    {
        case 1:
            cout << basic + (basic * 0.25) - (basic * 0.05);
            break;
        case 2:
            cout << basic + (basic * 0.20) - (basic * 0.08);
            break;
        case 3:
            cout << basic + (basic * 0.15) - (basic * 0.10);
            break;
        case 4:
            cout << basic + (basic * 0.10) - (basic * 0.12);
            break;
        default:
            cout << "Invalid Employee Grade";
    }
    return 0;
}