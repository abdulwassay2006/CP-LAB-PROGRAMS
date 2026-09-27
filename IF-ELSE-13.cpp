#include<iostream>
using namespace std;
int main ()
{

int temp, humidity;
cout<<"enter temperature : ";
cin >> temp ;
cout<<"enter humidity in air : "; 
cin>>humidity;

if (temp > 35)
{
    if (humidity > 60) 
    {
        cout << "Hot and Humid";
    } else {
        cout << "Hot and Dry";
    }
} else
{
    cout << "Pleasant Weather";
}
}
