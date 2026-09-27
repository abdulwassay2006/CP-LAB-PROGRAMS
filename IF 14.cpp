#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    
    int firstDigit = num / 100;
    int lastDigit = num % 10;
    
    if (firstDigit == lastDigit) 
    {
        cout << "The number is a Palindrome." << endl;
    }
}