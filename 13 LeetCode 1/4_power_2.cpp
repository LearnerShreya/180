// Power of 2 

#include<iostream>
using namespace std;

int main()
{
    // Input Number
    int num;
    cout<<"Enter integer: ";
    cin>>num;

    // Convert in binary form
    int rem, mul=1, ans=0, sol=0;
    {
        while(num>0)
        {
            rem=num%2;
            num/=2;
            ans = rem*mul +ans;
            mul*=10;
        }
        cout<<"Num in binary = "<<ans<<endl;
    }
    // Check whwther power of 2 or not.
    {
            while(ans>0)
            {
                rem=ans%10; 
                ans=ans/10;
                sol += rem;
            }
        if(sol==1)
        {
            cout<<"Power of 2.";
        }
        else
        {
            cout<<"Not a power of 2.";
        }
    }
}



/* class Solution {

    public:
    bool isPowerOfTwo(int n) {

        if(n<1)
        return 0;

        while(n!=1)
        {
            if(n%2==1)
            return 0;

            n=n/2;
        }
        return 1;
    }
}; */