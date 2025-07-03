#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    while (num > 0)
    {
        // rem = num % 2;          // remainder
        // num /= 2;               // quotient

        rem = num & 1;
        num = num>>1;
        
        ans += rem * mul;
        mul *= 10;
    }
    cout << ans << endl;

    return 0;

}

    // 🔍 Purpose: Convert decimal to binary using bitwise operations.
    // Output is an integer form of binary (e.g., 13 → 1101)

    // ✅ Dry Run for Input: num = 13
    //
    // Initial Binary of 13: 1101
    // ans += rem * mul;
    // ┌─────┬────────────┬────────────┬──────────────────────┬────────┬──────────┬──────────────┬─────────┐
    // │ Iter│ num (dec)  │ num(bin)   │ rem = num & 1        │ >> 1   │ rem×mul  │ ans (updated)│ mul     │
    // ├─────┼────────────┼────────────┼──────────────────────┼────────┼──────────┼──────────────┼─────────┤
    // │  1  │     13     │   1101     │ 1101 & 0001 = 0001 → 1│   6    │ 1 × 1    │   0 + 1 = 1   │   10    │
    // │  2  │      6     │   0110     │ 0110 & 0001 = 0000 → 0│   3    │ 0 × 10   │   1 + 0 = 1   │   100   │
    // │  3  │      3     │   0011     │ 0011 & 0001 = 0001 → 1│   1    │ 1 × 100  │   1 + 100 = 101│  1000   │
    // │  4  │      1     │   0001     │ 0001 & 0001 = 0001 → 1│   0    │ 1 × 1000 │101 + 1000 =1101│ 10000  │
    // └─────┴────────────┴────────────┴──────────────────────┴────────┴──────────┴──────────────┴─────────┘
    //
    // 🔚 Final Output: 1101