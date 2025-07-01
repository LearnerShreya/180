//  Print numbers from 1 to 100 but  difference is 3 

#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"Enter number: ";
    cin>>n;

    for(i=0; i<=n; i=i+3)
    cout<<i<<endl;
}