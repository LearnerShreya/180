// Fibonacci Series of a Number 

// next number is the sum of previous two numbers for example 0, 1, 1, 2, 3, 5, 8, 13, 21 etc. 
// The first two numbers of fibonacci series are 0 and 1.

#include<iostream>
using namespace std;

int main()
{
    int i, n, last=0, previous=1, current;
    cout<<"Enter number: ";
    cin>>n;

    cout << "Fibonacci Series up to " << n << " terms: "<<endl;
    cout << last <<" "<< previous<<" ";

    for(i=2; i<=n; i++){
    current = last + previous;

    last = previous;
    previous = current;
    cout<<current<<" ";
    }
}