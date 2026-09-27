#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string empName;
    double basicSalary;
    int rating;
    
    cout << "Enter Employee Name: ";
    cin >> empName;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Performance Rating : ";
    cin >> rating;
    
    if (basicSalary > 0 && rating >= 1 && rating <= 5) 
    {
        double bonus = basicSalary * (rating * 0.05); 
        double tax = basicSalary * 0.12;              
        double netSalary = (basicSalary + bonus) - tax;
        
        cout << "\n--- Salary Slip for " << empName << " ---" << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "Bonus Added  : " << bonus << endl;
        cout << "Tax Deducted : " << tax << endl;
        cout << "Net Salary   : " << netSalary << endl;
    }
    
    return 0;
}