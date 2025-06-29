#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter your number: ";
    cin>>number;
    cout<<number;

    if(number%2==0)
    cout<<" is an even number.";
    else
    cout<<" is is an odd number.";
    return 0;
}