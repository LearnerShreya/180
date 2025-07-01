#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a & b : ";
    cin>>a>>b;

    c = a;
    a = b;
    b = c;

    // c = a+b;
    // a = b;
    // b = c-b;
    cout<<"a = "<<a<<endl<<"b = "<<b;


    
}