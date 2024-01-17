#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the Alphabate: ";
    cin>>ch;

    if(ch>='A' && ch<='Z')
    {
        cout<<ch<<" is a uppercase.";
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<ch<<" is a lowercase.";
    }
    else if(ch>='1' && ch<='9')
    {
        cout<<ch<<" is a number.";
    }
    else{
        cout<<"This is a special sign.";
    }
}
