// check a number is Prime Number  or not  

#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter number:";
    cin>>n;

    if(n<2)
    {
        cout<<"Not a Prime number.";
        return 0;
    }

    else
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                cout<<"Not a Prime number.";
                return 0;
            }
        }
    }
    cout<<"Prime number.";
}