// A PROGRAM THAT helps you keep track of namaz and motivates you

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "How many times did you pray today? ";
    cin >> n;

    if (n == 1)
        cout << "Try to pray rest 4" << endl;
    else if (n == 2)
        cout << "Try to pray rest 3." << endl;
    else if (n == 3)
        cout << "Try to pray rest 2." << endl;
    else if (n == 4)
        cout << "Try to pray rest 1." << endl;
    else if (n == 5)
        cout << "Congratulations! You prayed all 5 prayes." << endl;
    else if (n == 0)
        cout << "A Muslim should pray 5 times a day" << endl;
    else if (n > 5)
        cout << "MashAllah! You are a good guy " << endl;
    else
        cout << "Invalid Input!";
    return 0;
}