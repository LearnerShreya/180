// Sum of 'N" natural numbers using Do While Loop

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int sum=0;

    do{
        sum=sum+i;
        i++;
    }
    while(i<=10);
    {
        cout<<"My answer is: "<<sum;
    }
}
