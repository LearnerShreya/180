// Fibonacci Series 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int a[1000];
    a[0]=0;
    a[1]=1;

    for(int i=2; i<=n; i++)
    a[i] = a[i-1] + a[i-2];
    cout<<a[n-1];
}


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, n, a=0, b=1, c;

//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<a<<" "<<b<<" ";
//     for(i=2; i<=n-1; i++)
//     {
//         c=a+b;
//         a=b, b=c;
//         cout<<c<<" ";
//     }
    
// }