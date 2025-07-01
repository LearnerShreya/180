#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>18)
    cout<<"You are adult.";
    else
    cout<<"You are teenager.";
    return 0;
}