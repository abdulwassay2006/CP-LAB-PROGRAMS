
#include <iostream>
using namespace std;

int main() 
{
    float weight, height;
    cout<<"enter your weight in kgs : ";
    cin >> weight;
    cout<<"enter your height in meters : ";
    cin>> height; 
    
    float bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        cout << "Underweight";
    } 
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        cout << "Normal Weight";
    } 
    else if (bmi >= 25.0 && bmi <= 29.9) 
    {
        cout << "Overweight";
    } 
    else 
    {
        cout << "Obese";
    }
    return 0;
}