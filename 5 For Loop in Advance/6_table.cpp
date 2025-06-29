// Multiplication table making

#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter number: ";
    cin>>n;
    for(i=n; i<=n*10; i=i+n)
    cout<<i<<endl;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(i=1; i<=10; i++)
//     cout<<i*n<<endl;
// }