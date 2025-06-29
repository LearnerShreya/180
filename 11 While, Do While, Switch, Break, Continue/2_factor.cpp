// Write a program to find factors of a Number

/* #include<iostream>
using namespace std;

int main()
{
    int i=1, n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"The factor of "<<n<<" is ";
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
        i++;
    }
} */


// Print all even numbers from 0 to given 'n'  number , Print all Odd  numbers from 0 to given 'n'  number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int i = 1;              // initalize
    
    while(i<=n)             // break
    {
        if(i%2!=0)
        {
            cout<<i<<" is an odd number."<<endl;
        }
        else
        {
            cout<<i<<" is an even number."<<endl;
        }
        i++;         //  update
    }
}