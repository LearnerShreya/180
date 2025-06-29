// sum of square of 'n' natural numbers 

#include<iostream>
using namespace std;

int main()
{
    int i,num, sum;
    cout<<"Enter number: ";
    cin>>num;
    sum = 0;

    for(i=1; i<=num; i++)
    sum = sum + (i*i);
    cout<<sum;
}