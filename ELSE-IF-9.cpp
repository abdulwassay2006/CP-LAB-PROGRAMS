#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"ENTER YOUR NO. : ";
    cin >> n;
    if (n > 0) 
    {
        cout << "Positive";
    }
    else if (n < 0) 
    {
        cout << "Negative";
    }
    else
    {
        cout << "Zero";
}
}