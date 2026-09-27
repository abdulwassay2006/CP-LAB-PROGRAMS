#include <iostream>
using namespace std;

int main() 
{
    char signal;
    cout<<"ENTER COLOR OF SIGNAL (R FOR RED; Y FOR YELLOW; G FOR GREEN):  "  ;
    cin >> signal;
    if (signal == 'R' || signal == 'r') 
    {
        cout << "Stop";
    } 
    else if (signal == 'Y' || signal == 'y')
    {
        cout << "Get Ready";
    }
    else if (signal == 'G' || signal == 'g')
    {
        cout << "Go";
    }
    else 
    {
        cout << "Invalid Signal";
}
}