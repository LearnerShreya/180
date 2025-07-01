
// In C++, when we write a for or if or while without braces {},
// only the next single statement is part of the loop.


// Sum of ' n ' natural numbers 

#include<iostream>
using namespace std;

int main()
{
    int i,num, sum;
    cout<<"Enter number: ";
    cin>>num;
    sum = 0;

    for(i=1; i<=num; i++)
    sum = sum + i;
    cout<<sum;
}



// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, sum;
//     cout<<"Enter number: ";
//     cin>>n;
//     sum = (n*(n+1))/2;
//     cout<<sum;
// }