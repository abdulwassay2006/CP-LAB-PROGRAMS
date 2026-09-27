#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter x coordinate : ";
    cin >> x;
    cout << "Enter y coordinate : ";
    cin >> y;
    
    if (x > 0 && y > 0) 
    {
        cout << "The point is in the First Quadrant." ;
    } 
    
    return 0;
}
