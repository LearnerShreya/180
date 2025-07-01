#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter your number: ";
    cin>>number;
    if (number>0)
    cout<<number<<" is a positive number.";
    else if (number<0)
    cout<<number<<" is a negative number.";
    else
    cout<<number<<" is zero.";
}