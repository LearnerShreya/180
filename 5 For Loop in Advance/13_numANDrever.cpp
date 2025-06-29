//  printing a sequence of numbers twice: once from 0 to n and then from n down to 0

#include<iostream>
using namespace std;

int main()
{
    int i, n;
    cout<<"Enter number: ";
    cin>>n;
    for(i=0; i<=n; i++)
    cout<<i<<" ";
    for(i=n-1; i>=0; i--)
    cout<<i<<" ";

    
}