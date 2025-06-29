#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int rem, ans=0;
    while(num>9)
    {
        while(num>0)
        {
            rem = num%10;
            num /= 10;
            ans += rem;
        }
        num = ans;
        }
        cout<<num<<endl;
   
    return 0;
}

/* class Solution {
    public:
    int addDigits(int num){

        while(num>9)
        {
            int ans=0, rem;
            while(num!=0)
            {
                rem = num%10;
                num /= 10;
                ans *= rem;
            }
            num = ans;
        }
        return num;
    }
}; */
