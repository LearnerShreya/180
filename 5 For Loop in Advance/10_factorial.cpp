// Factorial of a Number 

// A factorial is the product of all positive integers less than or equal to a given positive integer. 
// It is denoted by that integer and an exclamation point. 
// For example, factorial seven is written 7!, meaning 1 * 2 * 3 * 4 * 5 * 6 * 7.

#include<iostream>
using namespace std;

int main()
{
    int i,n,factorial;
    cout<<"Enter number: ";
    cin>>n;
    factorial = 1;
    for(i=1; i<=n; i++)
    factorial = factorial*i;
    cout<<"Factorial is: ";
    cout<<factorial;
}