#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    if(num%4==0)
    {
        if(num%100==0)
        {
            if(num%400==0)
            {
                cout<<num<<" is a Leap Year.";
            }
            else
            cout<<num<<" is a not a Leap Year.";
        }
        else
            cout<<num<<" is a Leap Year.";
    }
    else
    cout<<num<<" is not a Leap Year.";  
}



/* class Solution{
    public:
    int isLeap(int N){
        // code here

        if(N%400==0)
        return 1;
        else if(N%4==0 && N%100!=0)
        return 1;
        else
        return 0;
    }
}; */