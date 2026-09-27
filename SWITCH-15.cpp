#include <iostream>
using namespace std;

int main()
{
    int category;
    float declaredValue, weight;
    cout << "Enter import category in integral form (1-Electronics, 2-Apparel, 3-Auto, 4-Medical): ";
    cin >> category;
    cout << "Enter declared value: ";
    cin >> declaredValue;
    cout << "Enter weight in kg: ";
    cin >> weight;
    
    switch (category) {
        case 1:
            cout << "Electronics Customs Duty: " << (declaredValue > 50000 ? (declaredValue * 0.35) + (weight * 120) : (declaredValue * 0.20) + (weight * 80));
            break;
        case 2:
            cout << "Apparel Customs Duty: " << (weight > 10 ? (weight * 250) + (declaredValue * 0.10) : (weight * 150) + (declaredValue * 0.05));
            break;
        case 3:
            cout << "Auto Parts Customs Duty: " << (declaredValue * 0.40) + (weight * 300);
            break;
        case 4:
            cout << "Medical Items Customs Duty: " << declaredValue * 0.02;
            break;
        default:
            cout << "Invalid Tariff Category";
    }
    return 0;
}