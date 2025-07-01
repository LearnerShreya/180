#include<iostream>
using namespace std;

int main()
{
    int num, mul=1, rem, ans=0;

    cout<<"Enter number: ";
    cin>>num;
    
/*     if (num == 0) {
        cout << 0 << endl;
        return 0;
    } */

    while (num>0)
    {
        rem = num%10;
        num /= 10;
        ans += rem*mul;
        mul *= 2;
    }
    cout << ans << endl;

    return 0;
    
}