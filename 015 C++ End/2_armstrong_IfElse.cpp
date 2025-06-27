#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, rem, count=0, digit=0, ans=0;
    cout<<"Enter number: ";
    cin>>n;
    int num=n, number=n;

{
    while(n)
    {
        count++;
        n/=10;
        digit=count;
    }
    cout<<"digit: "<<digit<<endl;

    while(num)
    {
        rem = num%10;
        num /= 10;
        ans += (pow(rem, digit));
        cout<<"ans= "<<ans<<endl;
    }
}

    if(number==ans)
    {
    cout<<number<<" is an armstrong number.";
    }
    else
    cout<<number<<" is not an armstrong number.";
}