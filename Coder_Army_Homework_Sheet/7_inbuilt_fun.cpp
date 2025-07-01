#include<iostream>
using namespace std;

/* // void swap(int a, int b )      // Pass by value
void swap(int &a, int &b )      // Pass by reference
{
    int c;
    c = a;
    a = b;
    b = c;
}

void swap(float &c, float &d)        // function overloading
{
    float r = c;
    c = d;
    d = r;
} */

int main()
{
    int a, b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" "<<endl;
    
    float f1 = 4.8, f2 = 8.4;
    swap(f1, f2);
    cout<<f1<<" "<<f2<<" ";
}