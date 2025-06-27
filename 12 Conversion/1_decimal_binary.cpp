#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num == 0) {
        cout << 0 << endl;
        return 0;
    }

    int rem, ans = 0, mul = 1;

    while (num > 0)
    {
        // remainder
        // rem = num % 2;
        rem = num & 1;
        // quotient
        // num /= 2;
        num = num>>1;
        // ans
        ans += rem * mul;
        // mul
        mul *= 10;
    }
    cout << ans << endl;

    return 0;
}
