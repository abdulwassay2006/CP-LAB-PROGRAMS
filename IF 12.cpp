#include <iostream>
#include <string> 
using namespace std;
int main() 
{
    float amount;
    string vipCard;
    
    cout << "Enter total shopping amount : ";
    cin >> amount;
    
    cout << "Do you have a VIP card? (yes/no) : ";
    cin >> vipCard;
    
    if (amount >= 5000 && vipCard == "yes" ) 
    {
        cout << "Special Discount Applied" ;
    }
    
    return 0;
}