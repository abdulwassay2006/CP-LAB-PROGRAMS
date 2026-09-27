// A program that tells your fitness level according to your BMI

#include <iostream>
using namespace std;

int main() 
{
    double bmi;
    cout << "Enter your BMI: ";
    cin >> bmi;

    if (bmi <= 18.5)
        cout << "You are Underweight" << endl;
    else if (bmi < 25)
        cout << "You are Normal and almost Fit" << endl;
    else if (bmi < 30)
        cout << "You are Overweight" << endl;
    else if (bmi >=30)
        cout << "You are Obese" << endl;
    else
	    cout << "Invalid Input";  

    return 0;
}