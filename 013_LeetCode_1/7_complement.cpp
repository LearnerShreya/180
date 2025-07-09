#include<iostream>
using namespace std;

int main() {

    int num, rem, ans=0, mul=1;

    cout << "Enter the Number = ";
    cin >> num;

    if(num==0)
    {
         cout<<"Complement of number is 1 .";
         return 0;
    }

    while (num) {
        rem = num % 2;
        rem=rem^1;
        num = num / 2;
        ans = ans + rem*mul;
        mul*=2;
    }
    cout<<"Complement of number is "<<ans<<" .";

    return 0;

}





/* class Solution {
    public:
    int bitwiseComplement(int n) {

    if(n==0)
         return 1;

         int rem, ans=0, mul=1;
    while (n) 
    {
        rem = n % 2;
        rem=rem^1;
        n = n / 2;
        ans = ans + rem*mul;
        mul*=2;
    }

    return 0;
    }
}; */