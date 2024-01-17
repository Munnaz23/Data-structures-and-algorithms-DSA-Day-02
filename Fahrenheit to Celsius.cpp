#include<iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius;
    cout<<"Enter the Fahrenheit: ";
    cin>>fahrenheit;

    celsius = (fahrenheit-32)/1.8;

    cout<<"The Celsius is "<<celsius;
    return 0;
}
