#include <iostream>
using namespace std;

int main()
{
    int ans = 1;
    int arr[5];

    // Reading input into the array
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Multiplying array elements
    for (int i = 0; i < 5; i++)
    {
        ans *= arr[i];
    }

    // Printing the result
    cout << ans << endl;

    return 0;
}
