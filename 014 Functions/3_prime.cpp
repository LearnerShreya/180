#include<iostream>
using namespace std;


bool Prime(int n) {
    if(n<2)
    return 0;

    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int Fact(int n) 
{
    int i, ans=1;
    
    for(i=1; i<=n; i++)
        ans = ans*i;
    return ans;
}

int main() {
    int a, b;
    cout<<"Enter the number: ";
    cin>>a>>b;

    cout<<"Is A a prime number? "<<Prime(a)<<endl;
    cout<<"Factorial of A: "<<Fact(a)<<endl;
    cout<<"Is B a prime number? "<<Prime(b)<<endl;
    cout<<"Factorial of B: "<<Fact(b)<<endl;
    cout<<"Is B-A a prime number? "<<Prime(b-a)<<endl;
    cout<<"Factorial of B-A: "<<Fact(b-a)<<endl;
}