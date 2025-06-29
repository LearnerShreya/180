// Square root of  x  

#include<iostream>
using namespace std;

int main()
{
    int num, n, sqt, sol;
    cout<<"Enter number: ";
    cin>>num;

    for(n=1; n*n<=num; n++)
    {
        sqt=n*n;
        sol=sqt;
    }
    if(sol<=num)
    cout<<n-1 ;
}