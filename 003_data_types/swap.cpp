/* #include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b;
} */


#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" "<<b;
}